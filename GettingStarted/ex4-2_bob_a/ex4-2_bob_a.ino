// turn on LED if button is pressed & it is currently off
// and vice versa

const int LED = 13;
const int BUTTON = 7;

int val = 0;
int currentState = 0;

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT); 
}

void loop(){
  val = digitalRead(BUTTON);

  currentState = 1 - val;

  if (currentState == HIGH){
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}


