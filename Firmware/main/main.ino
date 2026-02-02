#include <Encoder.h>
#include <Bounce2.h>
#define DUMP_REGS
#include <Wire.h>
#include <APDS9930.h>

#include <Arduino.h>
#include <U8g2lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

// Define pins
const int heater = 29;  // Timer0
const int fan = 28;  // Timer0 or Timer1 depending on board


Encoder myEnc(26, 27);

APDS9930 apds = APDS9930();
uint16_t proximity_data = 0;

// ================== BUTTONS ==================
Bounce btn1;
Bounce btn2;
Bounce btn3;
Bounce btn4;

constexpr uint8_t BTN_1_PIN = 12;
constexpr uint8_t BTN_2_PIN = 13;
constexpr uint8_t BTN_3_PIN = 14;
constexpr uint8_t BTN_4_PIN = 15;
// ================================================

AccelStepper stepper(AccelStepper::DRIVER, 5, 2);
const int enable_pin = 4;
const int mode0 = 6;
const int mode1 = 7;
const int mode2 = 8;



void setupButtons() {
  pinMode(BTN_1_PIN, INPUT);
  pinMode(BTN_2_PIN, INPUT);
  pinMode(BTN_3_PIN, INPUT);
  pinMode(BTN_4_PIN, INPUT);

  btn1.attach(BTN_1_PIN);
  btn2.attach(BTN_2_PIN);
  btn3.attach(BTN_3_PIN);
  btn4.attach(BTN_4_PIN);

  btn1.interval(10);
  btn2.interval(10);
  btn3.interval(10);
  btn4.interval(10);
}
void filamentSensorSetup() {
  Serial.println(F("---------------------------"));
  Serial.println(F("APDS-9930 - ProximitySensor"));
  Serial.println(F("---------------------------"));

  if ( apds.init() ) {
    Serial.println(F("APDS-9930 initialization complete"));
  } else {
    Serial.println(F("Something went wrong during APDS-9930 init!"));
  }

  // // Adjust the Proximity sensor gain
  // if ( !apds.setProximityGain(PGAIN_2X) ) {
  //   Serial.println(F("Something went wrong trying to set PGAIN"));
  // }

  if ( apds.enableProximitySensor(false) ) {
    Serial.println(F("Proximity sensor is now running"));
  } else {
    Serial.println(F("Something went wrong during sensor init!"));
  }
}
#ifdef DUMP_REGS
  /* Register dump */
  uint8_t reg;
  uint8_t val;

  for(reg = 0x00; reg <= 0x19; reg++) {
    if( (reg != 0x10) && \
        (reg != 0x11) )
    {
      apds.wireReadDataByte(reg, val);
      Serial.print(reg, HEX);
      Serial.print(": 0x");
      Serial.println(val, HEX);
    }
  }
  apds.wireReadDataByte(0x1E, val);
  Serial.print(0x1E, HEX);
  Serial.print(": 0x");
  Serial.println(val, HEX);
#endif
}
void oledSetup(): {
  U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
  u8g2.begin();
}
void shtSetup(): {
  while (!Serial)
    delay(10);     // will pause Zero, Leonardo, etc until serial console opens

  Serial.println("Adafruit SHT4x test");
  if (! sht4.begin()) {
    Serial.println("Couldn't find SHT4x");
    while (1) delay(1);
  }
  Serial.println("Found SHT4x sensor");
  Serial.print("Serial number 0x");
  Serial.println(sht4.readSerial(), HEX);

  // You can have 3 different precisions, higher precision takes longer
  sht4.setPrecision(SHT4X_HIGH_PRECISION);
  switch (sht4.getPrecision()) {
     case SHT4X_HIGH_PRECISION: 
       Serial.println("High precision");
       break;
     case SHT4X_MED_PRECISION: 
       Serial.println("Med precision");
       break;
     case SHT4X_LOW_PRECISION: 
       Serial.println("Low precision");
       break;
  }

  // You can have 6 different heater settings
  // higher heat and longer times uses more power
  // and reads will take longer too!
  sht4.setHeater(SHT4X_NO_HEATER);
  switch (sht4.getHeater()) {
     case SHT4X_NO_HEATER: 
       Serial.println("No heater");
       break;
     case SHT4X_HIGH_HEATER_1S: 
       Serial.println("High heat for 1 second");
       break;
     case SHT4X_HIGH_HEATER_100MS: 
       Serial.println("High heat for 0.1 second");
       break;
     case SHT4X_MED_HEATER_1S: 
       Serial.println("Medium heat for 1 second");
       break;
     case SHT4X_MED_HEATER_100MS: 
       Serial.println("Medium heat for 0.1 second");
       break;
     case SHT4X_LOW_HEATER_1S: 
       Serial.println("Low heat for 1 second");
       break;
     case SHT4X_LOW_HEATER_100MS: 
       Serial.println("Low heat for 0.1 second");
       break;
  }
  
}


void setup() {
  Wire.setSDA(0);
  Wire.setSCL(1);

  oledSetup();

  filamentSensorSetup();

  shtSetup();

  setupButtons();

  pinMode(heater, OUTPUT);
  pinMode(fan, OUTPUT);

  pinMode(enable_pin, OUTPUT);

  stepper.setMaxSpeed(1000); // steps/sec
  stepper.setAcceleration(500); // steps/sec^2

  Serial.begin(9600);
  Serial.println("Basic Functionality Firmware");
}


void updateButtons() {
  btn1.update();
  btn2.update();
  btn3.update();
  btn4.update();

  if (btn1.fell()) onButton1Press();
  if (btn2.fell()) onButton2Press();
  if (btn3.fell()) onButton3Press();
  if (btn4.fell()) onButton4Press();
}
void updateEncoder() {
  long newPosition = myEnc.read();
  if (newPosition != oldPosition) {
    oldPosition = newPosition;
    Serial.println("Encoder Position: " + str(newPosition));
  }
}
void updateOLED(): {
  u8g2.clearBuffer();					// clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);	// choose a suitable font
  u8g2.drawStr(0,10,"Hello World!");	// write something to the internal memory
  u8g2.sendBuffer();					// transfer internal memory to the display
}
void readProximitySensor(): {
  if ( !apds.readProximity(proximity_data) ) {
  Serial.println("Error reading proximity value");
  }
  else {
  Serial.print("Proximity: ");
  Serial.println(proximity_data);
  }
}
void readSHT40(): {
  sensors_event_t humidity, temp;
  
  uint32_t timestamp = millis();
  sht4.getEvent(&humidity, &temp);// populate temp and humidity objects with fresh data
  timestamp = millis() - timestamp;

  Serial.print("Temperature: "); Serial.print(temp.temperature); Serial.println(" degrees C");
  Serial.print("Humidity: "); Serial.print(humidity.relative_humidity); Serial.println("% rH");

  Serial.print("Read duration (ms): ");
  Serial.println(timestamp);
}


long oldPosition  = -999;

void loop() {
  updateEncoder():
  updateButtons();
  updateOLED();
  readProximitySensor();
  readSHT40(); 
  analogWrite(heater, 64); // 25% duty cycle
  analogWrite(fan, 192); // 75% duty cycle

  digitalWrite(enable_pin, LOW);
  digitalWrite(mode0, HIGH);
  digitalWrite(mode1, LOW);
  digitalWrite(mode2, LOW);
  stepper.moveTo(100); // move 2000 steps
  stepper.run();
  delay(1000);
}





void onButton1Press() {
  Serial.println("Button 1 pressed");
}

void onButton2Press() {
  Serial.println("Button 2 pressed");
}

void onButton3Press() {
  Serial.println("Button 3 pressed");
}