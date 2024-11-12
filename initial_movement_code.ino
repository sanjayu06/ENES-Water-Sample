//Assigning Pins Left Motor (A) 
const int EN_A = 11;//speed
const int IN1_A = 22; //direction
const int IN2_A = 23; //direction

//Assigning Pins Right Motor (B)
const int EN_B = 12;//speed
const int IN1_B = 24; //direction
const int IN2_B = 25; //direction


void setup() {
  // put your setup code here, to run once:
  pinMode(EN_A, OUTPUT);
  pinMode(IN1_A, OUTPUT);
  pinMode(IN2_A, OUTPUT);

  pinMode(EN_B, OUTPUT);
  pinMode(IN1_B, OUTPUT);
  pinMode(IN2_B, OUTPUT);

    // put your main code here, to run repeatedly:
}

void loop() {

analogWrite(EN_A, 75);
analogWrite(EN_B, 75);

digitalWrite(IN1_A, LOW);
digitalWrite(IN2_A, HIGH);

digitalWrite(IN1_B, LOW);
digitalWrite(IN2_B, HIGH);
delay(2000);

digitalWrite(IN1_A, LOW);
digitalWrite(IN2_A, LOW);

digitalWrite(IN1_B, LOW);
digitalWrite(IN2_B, LOW);
delay(1000);

analogWrite(EN_A, 125);
analogWrite(EN_B, 125);

digitalWrite(IN1_A, LOW);
digitalWrite(IN2_A, HIGH);

digitalWrite(IN1_B, HIGH);
digitalWrite(IN2_B, LOW);
delay(2200);

digitalWrite(IN1_A, LOW);
digitalWrite(IN2_A, LOW);

digitalWrite(IN1_B, LOW);
digitalWrite(IN2_B, LOW);
delay(1000000);

}
