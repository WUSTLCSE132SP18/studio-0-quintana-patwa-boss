bool a = true;
bool b = true;
void setup(){
  Serial.begin(9600);
}

void loop(){
  
  int c = a == b;
  Serial.println(c);
  delay(2000);
}

