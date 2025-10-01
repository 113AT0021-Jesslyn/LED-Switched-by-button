const int buttonPin = 2;
const int rLEDPin = 3;
const int gLEDPin = 4;
const int bLEDPin = 5;

int buttonState = 0;
int ledColor = 0;
bool ButtonPressed = false;
String currentcolor="led";

void setup() {
  // put your setup code here, to run once:
  pinMode (rLEDPin, OUTPUT);
  pinMode (gLEDPin, OUTPUT);
  pinMode (bLEDPin, OUTPUT);
  pinMode (buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {

  buttonState = digitalRead(buttonPin);
  Serial.print("Currenty Color: ");
  Serial.println(currentcolor);

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
    currentcolor = "LED off";
    digitalWrite(rLEDPin, HIGH);
    digitalWrite(gLEDPin, HIGH);
    digitalWrite(bLEDPin, HIGH);
  }

  else if (ledColor == 1) {
    currentcolor = "Red";
    digitalWrite(rLEDPin, LOW);
    digitalWrite(gLEDPin, HIGH);
    digitalWrite(bLEDPin, HIGH);
  }

  else if (ledColor == 2) {
    currentcolor = "Green";
    digitalWrite(rLEDPin, HIGH);
    digitalWrite(gLEDPin, LOW);
    digitalWrite(bLEDPin, HIGH);
  }

  else if (ledColor == 3) {
    currentcolor = "Blue";
    digitalWrite(rLEDPin, HIGH);
    digitalWrite(gLEDPin, HIGH);
    digitalWrite(bLEDPin, LOW);
  }

  else if (ledColor == 4) {
    currentcolor = "Yellow";
    digitalWrite(rLEDPin, LOW);
    digitalWrite(gLEDPin, LOW);
    digitalWrite(bLEDPin, HIGH);
  }

  else if (ledColor == 5) {
    currentcolor = "Purple";
    digitalWrite(rLEDPin, LOW);
    digitalWrite(gLEDPin, HIGH);
    digitalWrite(bLEDPin, LOW);
  }

  else if (ledColor == 6) {
    currentcolor = "Cyan";
    digitalWrite(rLEDPin, HIGH);
    digitalWrite(gLEDPin, LOW);
    digitalWrite(bLEDPin, LOW);
  }

  else if (ledColor == 7) {
    currentcolor = "White";
    digitalWrite(rLEDPin, LOW);
    digitalWrite(gLEDPin, LOW);
    digitalWrite(bLEDPin, LOW);
  }

  else if(ledColor == 8) {
    ledColor = 0;
  }


}
