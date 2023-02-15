//10x LED ovládané cez tranzistor z jedého digitálneho PIN-u
//v komentároch riešenie pre posuvný register namiesto tranzistoru

int analogIN = A1;
int pinLED = 3;

//int latch = 5;
//int clock = 6;
//int data = 4;

int controlValue = 0;

//byte led = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(analogIN,INPUT);
  pinMode(pinLED,OUTPUT);

  //pinMode(latch, OUTPUT);
  //pinMode(clock, OUTPUT);
  //pinMode(data, OUTPUT);  

  digitalWrite(pinLED,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  controlValue = analogRead(analogIN);
  analogWrite(pinLED,(controlValue));

  Serial.println (analogIN);
  controlValue = analogRead (analogIN);
  digitalWrite(pinLED, HIGH);
  //controlValue/5 pre lepšiu viditeľnosť
  delay(controlValue/5);
  digitalWrite(pinLED, LOW);
  delay(controlValue/5);

  // leds = 0;
  // digitalWrite(latch, LOW);
  // shiftOut(data, clock, LSBFIRST, leds);
  // digitalWrite(latch, HIGH);

  // delay(controlValue);
  // for (int i = 0; i < 4; i++)
  // {
  //   bitSet(led, i);
  //   digitalWrite(latch, LOW);
  //   shiftOut(data, clock, LSBFIRST, leds);
  //   digitalWrite(latch, HIGH);
  //   delay(controlValue);
  // }
}
