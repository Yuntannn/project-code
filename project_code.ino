/* Student name: Yuntan SUN
 *  Student ID: 218011232
 *  Description:  use the multiple sensors
 */


const int TrigPin = 12;
const int EchoPin = 11;

float cm;
 void setup(){
  pinMode(TrigPin, OUTPUT);
  pinMode(EchoPin, INPUT);

  Serial.begin(9600);
 }

 void loop(){
  digitalWrite(TrigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);

  cm = pulseIn(EchoPin, HIGH) / 58.0;
  cm = (int(cm * 100.0)) / 100.0;
  Serial.print(" The current distence is: ");
  Serial.print(cm);
  Serial.print("cm. ");
  Serial.println();
  delay(1000);
  if (cm < 100){
    Serial.print("WARNING!!! TOO CLOSE");
  }
 }


 
