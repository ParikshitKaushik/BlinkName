int led_builtIn = 13; 
int buttonPin = 2; 
String name = "Parikshit";
bool Blinking = false;
int i = 0;
void setup() {
  pinMode(led_builtIn, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(buttonPin), loop, FALLING); 
}

void loop() {
  isBlinking = true;
  i = 0;
   if (isBlinking) {
    BlinkName();
    isBlinking = false;
  }

}

void BlinkName()
{
  for (i; i < name.length(); i++) {
      BlinkCharacters(name[i]);
      delay(1000);
    }
}

void BlinkDot() {
  digitalWrite(led_builtIn, HIGH);
  delay(300);
  digitalWrite(led_builtIn, LOW);
  delay(500);

}

void BlinkDash() {
  digitalWrite(led_builtIn, HIGH);
  delay(900);
  digitalWrite(led_builtIn, LOW);
  delay(500);
}

void BlinkCharacters(char x) {
  if (x == 'a') {
    BlinkDot();
    BlinkDash();
  }
  if (x == 'b') {
    BlinkDash();
    BlinkDot();
    BlinkDot();
    BlinkDot();
  }
  if (x == 'c') {
    BlinkDash();
    BlinkDot();
    BlinkDash();
    BlinkDot();
  }
  if (x == 'd') {
    BlinkDash();
    BlinkDot();
    BlinkDot();
  }
  if (x == 'e') {
    BlinkDot();
  }
  if (x == 'f') {
    BlinkDot();
    BlinkDot();
    BlinkDash();
    BlinkDot();
  }
  if (x == 'g') {
    BlinkDash();
    BlinkDash();
    BlinkDot();
  }
  if (x == 'h') {
    BlinkDot();
    BlinkDot();
    BlinkDot();
    BlinkDot();
  }
  if (x == 'i') {
    BlinkDot();
    BlinkDot();
  }
  if (x == 'j') {
    BlinkDot();
    BlinkDash();
    BlinkDash();
    BlinkDash();
  }
  if (x == 'k') {
    BlinkDash();
    BlinkDot();
    BlinkDash();
  }
  if (x == 'l') {
    BlinkDot();
    BlinkDash();
    BlinkDot();
    BlinkDot();
  }
  if (x == 'm') {
    BlinkDash();
    BlinkDash();
  }
  if (x == 'n') {
    BlinkDash();
    BlinkDot();
  }
  if (x == 'o') {
    BlinkDash();
    BlinkDash();
    BlinkDash();
  }
  if (x == 'p') {
    BlinkDot();
    BlinkDash();
    BlinkDash();
    BlinkDot();
  }
  if (x == 'q') {
    BlinkDash();
    BlinkDash();
    BlinkDot();
    BlinkDash();
  }
  if (x == 'r') {
    BlinkDot();
    BlinkDash();
    BlinkDot();
  }
  if (x == 's') {
    BlinkDot();
    BlinkDot();
    BlinkDot();
  }
  if (x == 't') {
    BlinkDash();
  }
  if (x == 'u') {
    BlinkDot();
    BlinkDot();
    BlinkDash();
  }
  if (x == 'v') {
    BlinkDot();
    BlinkDot();
    BlinkDot();
    BlinkDash();
  }
  if (x == 'w') {
    BlinkDot();
    BlinkDash();
    BlinkDash();
  }
  if (x == 'x') {
    BlinkDash();
    BlinkDot();
    BlinkDot();
    BlinkDash();
  }
  if (x == 'y') {
    BlinkDash();
    BlinkDot();
    BlinkDash();
    BlinkDash();
  }
  if (x == 'z') {
    BlinkDash();
    BlinkDash();
    BlinkDot();
    BlinkDot();
  }
}