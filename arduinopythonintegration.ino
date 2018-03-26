char serialData;


void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available() > 0){
    serialData = Serial.read();
    Serial.print(serialData);

    if(serialData == '1'){
      digitalWrite(13, HIGH);}
    else if(serialData != '1'){
        digitalWrite(13, LOW);}
    }
}
  // put your main code here, to run repeatedly:


