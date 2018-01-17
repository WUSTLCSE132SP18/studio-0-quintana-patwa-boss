void setup(){
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  
}

void loop(){
 
  delay(1000);
  int n = millis(); 
  int time = n / 1000; 
  digitalWrite(13, HIGH);
  delay(10);
   digitalWrite(13, LOW);
  Serial.print("sec have elapsed "); 
  Serial.println(time); 
  
}


