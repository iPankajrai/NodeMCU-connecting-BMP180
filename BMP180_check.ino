
#include <Wire.h>
#include <Adafruit_BMP085.h>
Adafruit_BMP085 bmp;

/*************************************************** 
  This is an example for the BMP085 Barometric Pressure & Temp Sensor
  
  These displays use I2C to communicate, 2 pins are required to  
  interface
 ****************************************************/

// Connect VCC of the BMP085 sensor to 3.3V (NOT 5.0V!)
// Connect GND to Ground
// connect i2c bus with SDA=D2 and SCL=D1 of NodeMCU 

// Connect SCL to i2c clock - on '168/'328 Arduino Uno/Duemilanove/etc thats Analog 5
// Connect SDA to i2c data - on '168/'328 Arduino Uno/Duemilanove/etc thats Analog 4
// EOC is not used, it signifies an end of conversion
// XCLR is a reset pin, also not used here
 

  
void setup() 
{

  
  Serial.begin(9600);
  if (!bmp.begin()) 
  {
      delay(2000);
      // to check the I2C pins for your board
      Serial.println("SCL:");
      Serial.println(SCL);
      Serial.println("SDA:");
      Serial.println(SDA);
      Serial.println("Could not find a valid BMP085 sensor, check wiring!");
      while (1) 
           {
            }
  }
}
  
void loop() 
{   
   
    delay(2000);
    Serial.print("Temperature = ");
    Serial.print(bmp.readTemperature());
    Serial.println(" *C");
    
    Serial.print("Pressure = ");
    Serial.print(bmp.readPressure());
    Serial.println(" Pa");
    
    // Calculate altitude assuming 'standard' barometric
    // pressure of 1013.25 millibar = 101325 Pascal
    Serial.print("Altitude = ");
    Serial.print(bmp.readAltitude());
    Serial.println(" meters");

    Serial.print("Pressure at sealevel (calculated) = ");
    Serial.print(bmp.readSealevelPressure());
    Serial.println(" Pa");

  // you can get a more precise measurement of altitude
  // if you know the current sea level pressure which will
  // vary with weather and such. If it is 1015 millibars
  // that is equal to 101500 Pascals.
    Serial.print("Real altitude = ");
    Serial.print(bmp.readAltitude(101500));
    Serial.println(" meters");
    
    Serial.println();
    delay(5000);
}
