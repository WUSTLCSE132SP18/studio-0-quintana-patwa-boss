enum State {
  red,
  purple,
  green,
  blue,
  yellow,
}
State color = red;
bool input = true;

void setup() {
  Serial.begin(9600);
}

void loop() {
  color = nextState(color);
}

State nextState(State current) {
  switch(current){
    case red:
    if(input){
      current = green;
    } else {
      current = purple;
    }
    break;
    case purple:
    if(input) {
      current = blue;
    } else {
      current = purple;
    }
    case blue
  }
}

