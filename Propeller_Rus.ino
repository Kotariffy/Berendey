#include <Adafruit_NeoPixel.h> // подключаем библиотеку

int const NUM_PIXELS1 = 101;
int const NUM_PIXELS2 = 102;

// указываем количество пикселей в матрице и пин подключения
Adafruit_NeoPixel strip1 (NUM_PIXELS1, 7, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip2 (NUM_PIXELS2, 6, NEO_GRB + NEO_KHZ800);


void setup()
{
  strip1.begin();                     // инициализируем объект NeoPixel
  strip1.show();                     // отключаем все пиксели на ленте
  strip1.setBrightness(50);         // указываем яркость (максимум 255)

  strip2.begin();                   // инициализируем объект NeoPixel
  strip2.show();                    // отключаем все пиксели на ленте
  strip2.setBrightness(50);        // указываем яркость (максимум 255)


}

void loop()
{
//  strip1.clear();
//  strip2.clear();
///////////////////////////////////////////  
  for (int i = 0; i < NUM_PIXELS1; i++)
  {
    strip1.setPixelColor(i, strip1.Color(127, 127, 127));  
    strip1.show();  
     
    delay(10);
  }

  for (int i = 0; i < NUM_PIXELS2; i++)
  {
    strip2.setPixelColor(i, strip2.Color(127, 127, 127));
    strip2.show();
    
    delay(10);
  }
  delay(100);
  ////////////////////////////////////////
  for (int i = 0; i < NUM_PIXELS1; i++)
  {
    strip1.setPixelColor(i, strip1.Color(0, 0, 200)); 
    strip1.show();
    
    delay(10);
  }

 
  for (int i = 0; i < NUM_PIXELS2; i++)
  {
    strip2.setPixelColor(i, strip2.Color(0, 0, 200)); 
    strip2.show();
    
    delay(10);
  }
  delay(100);
  
  ///////////////////////////////////////
  for (int i = 0; i < NUM_PIXELS1; i++)
  {
    strip1.setPixelColor(i, strip1.Color(200, 0, 0));  
    strip1.show();
   
    delay(10);
  }

  for (int i = 0; i < NUM_PIXELS2; i++)
  {
   
    strip2.setPixelColor(i, strip2.Color(200, 0, 0));
    strip2.show();
    delay(10);
    
  }
  
  delay(100);

}
