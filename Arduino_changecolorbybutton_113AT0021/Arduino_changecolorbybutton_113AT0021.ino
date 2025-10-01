const int buttonPin = 2;
const int rLEDPin = 3;
const int gLEDPin = 4;
const int bLEDPin = 5;

int buttonState = 0;
int ledColor = 0;

bool ButtonPressed = false;

void setup() {
  // put your setup code here, to run once:
  pinMode (rLEDPin, OUTPUT);
  pinMode (gLEDPin, OUTPUT);
  pinMode (bLEDPin, OUTPUT);

  pinMode (buttonPin, INPUT);
}

void loop() {

  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH && !ButtonPressed) {
    ledColor = ledColor + 1;
    ButtonPressed = true;
  // delay(100);
  } 

  if (buttonState == LOW && ButtonPressed) {
    ButtonPressed = false;
  }

  if (ledColor == 0) {
    digitalWrite(rLEDPin, HIGH);
    digitalWrite(gLEDPin, HIGH);
    digitalWrite(bLEDPin, HIGH);
  }

  else if (ledColor == 1) {
    digitalWrite(rLEDPin, LOW);
    digitalWrite(gLEDPin, HIGH);
    digitalWrite(bLEDPin, HIGH);
  }

  else if (ledColor == 2) {
    digitalWrite(rLEDPin, HIGH);
    digitalWrite(gLEDPin, LOW);
    digitalWrite(bLEDPin, HIGH);
  }

  else if (ledColor == 3) {
    digitalWrite(rLEDPin, HIGH);
    digitalWrite(gLEDPin, HIGH);
    digitalWrite(bLEDPin, LOW);
  }

  else if (ledColor == 4) {
    digitalWrite(rLEDPin, LOW);
    digitalWrite(gLEDPin, LOW);
    digitalWrite(bLEDPin, HIGH);
  }

  else if (ledColor == 5) {
    digitalWrite(rLEDPin, LOW);
    digitalWrite(gLEDPin, HIGH);
    digitalWrite(bLEDPin, LOW);
  }

  else if (ledColor == 6) {
    digitalWrite(rLEDPin, HIGH);
    digitalWrite(gLEDPin, LOW);
    digitalWrite(bLEDPin, LOW);
  }

  else if (ledColor == 7) {
    digitalWrite(rLEDPin, LOW);
    digitalWrite(gLEDPin, LOW);
    digitalWrite(bLEDPin, LOW);
  }

  else if(ledColor == 8) {
    ledColor = 0;
  }


}
