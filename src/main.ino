// This is the code for the device, where s = IR sensor and b = buzzer

int s1 = 2;
int s2 = 3;
int b1 = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  pinMode(b1, OUTPUT);
  digitalWrite(b1, LOW);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int s1V = digitalRead(s1);
  int s2V = digitalRead(s2);

  if (s1V == 0 || s2V == 0) {
    digitalWrite(b1, HIGH);
  } else {
    digitalWrite(b1, LOW);
  }
  

}
