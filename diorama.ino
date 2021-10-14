//---------------//
//----Диорама----//
//---------------//

#include <Adafruit_NeoPixel.h>  

#define NUMPIXELS 49
#define LED_PIN 6

Adafruit_NeoPixel pixels(NUMPIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);

// Указываем номер вывода, к которому подключен ползунковый потенциометр
int8_t   PotenciometrPin1 = A0;           
int8_t   PotenciometrPin2 = A1;  
int8_t   PotenciometrPin3 = A2;  

// Определяем переменную для значений, считанных с ползункового потенциометра            
uint16_t Value1 = 0;             
uint16_t Value2 = 0;
uint16_t Value3 = 0;

// Определяем переменную для значений, которые будут передаваться как ШИМ-сигнал
uint8_t  PWM1 = 0;             
uint8_t  PWM2 = 0; 
uint8_t  PWM3 = 0; 

void setup() 
{
  pixels.begin();
  pixels.clear();
}

void loop() 
{
  // Считываем аналоговый сигнал с потенциометров 
  Value1 = analogRead(PotenciometrPin1); 
  Value2 = analogRead(PotenciometrPin2); 
  Value3 = analogRead(PotenciometrPin3); 
  
  // Преобразуем полученный интервал значений 
  // с потенциометра в интервал для ШИМ-сигнала
  
  PWM1 = map(Value1, 0, 1023, 0, 127);      
  PWM2 = map(Value2, 0, 1023, 0, 127); 
  PWM3 = map(Value3, 0, 1023, 0, 127); 

  for (int i = 0; i < NUMPIXELS; i++ ) 
  {         
    pixels.setPixelColor(i, pixels.Color(PWM1, PWM2, PWM3) );
  }
  
  pixels.show(); 
    
}
