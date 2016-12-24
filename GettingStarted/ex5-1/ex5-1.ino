const int LED = 9;
const int DELAY = 1;

int i = 0;

void setup(){
  pinMode(LED, OUTPUT);
}

void loop()
{
  for(int i = 0; i < 255; i = i + 16) {
    analogWrite(LED, i);
    delay(DELAY);
  }
  for(int i = 255; i > 0; i--) {
    analogWrite(LED, i);
    delay(DELAY);
  }
}