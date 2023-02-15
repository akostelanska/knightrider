//5x LED ovládané z viacerých digitálnych pinov

int analogIN = A1;
int pin[] = {4,5,6,7,8};

int controlValue = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(analogIN,INPUT);

  for(int i = 0; i <= 4; i++){
    pinMode(pin[i],OUTPUT);
  }

  //digitalWrite(pinLED,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  controlValue = analogRead(analogIN);
  //analogWrite(pinLED,(controlValue));
  Serial.println (analogIN);

  for(int j = 5; j >= 0; j--){
   digitalWrite(pin[j], HIGH);
    delay(controlValue);
   digitalWrite(pin[j], LOW);
  }

  for(int i = 0; i <= 5; i++){
    digitalWrite(pin[i], HIGH);
    delay(controlValue);
    digitalWrite(pin[i], LOW);
  }

}
