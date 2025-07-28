void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print(".");             
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print("-");            
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void letterSpace() {
  Serial.print(" ");            
  delay(800);
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);            
  delay(2000);                   
  Serial.println("Blinking name: BALKIRAT in Morse Code");
}

void loop() {
  // B = -...
  dash(); dot(); dot(); dot();
  letterSpace();

  // A = .-
  dot(); dash();
  letterSpace();

  // L = .-..
  dot(); dash(); dot(); dot();
  letterSpace();

  // K = -.-
  dash(); dot(); dash();
  letterSpace();

  // I = ..
  dot(); dot();
  letterSpace();

  // R = .-.
  dot(); dash(); dot();
  letterSpace();

  // A = .-
  dot(); dash();
  letterSpace();

  // T = -
  dash();
  letterSpace();

  Serial.println();             
  delay(3000);                  
}
