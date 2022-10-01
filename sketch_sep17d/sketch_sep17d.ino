#define RED   8
#define GREEN   9
#define BLUE    10

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  LED_Color(1,1,0);
  delay(1000);
  LED_Color(1,1,0);
  LED_Color(1,0,0);
  delay(1000);
  LED_Color(1,0,1);
  delay(1000);
  LED_Color(1,1,1);
  delay(1000);
}

void LED_Color(int r, int g,int b){
  digitalWrite(RED, r);
  digitalWrite(GREEN, g);
  digitalWrite(BLUE, b);
}
