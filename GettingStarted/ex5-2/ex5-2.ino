const int LED = 9;
const int BUTTON = 7;

int val = 0;

int old_val = 0;
int state = 0;

int brightness = 128;
unsigned long startTime = 0;

void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);
}

void loop()
{
  val = digitalRead(BUTTON);

  if(val == HIGH && old_val == LOW) {
    state = 1 - state;
    startTime = millis();

    delay(10);
  }

  // check for button hold
  if(val == HIGH && old_val == HIGH) {
    // longer than 500 ms?
    if(state == 1 && (millis() - startTime) > 500) {
      brightness++;
      delay(10);

      if (brightness > 255) {
        //brightness is at max, so start over
        brightness = 0;
      }
    }
  }

  old_val = val;

  if (state == 1) {
    analogWrite(LED, brightness);
  } else {
    analogWrite(LED, 0);
  }
}