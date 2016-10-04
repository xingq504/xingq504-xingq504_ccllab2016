int inPin = 2;  
int reading;    
int GreenLedPin = 13;  
int RedLedPin = 12;   
const int SpeakerPin = 11; 

void setup(){
  pinMode (inPin, INPUT);
  pinMode (GreenLedPin, OUTPUT);
  pinMode (RedLedPin, OUTPUT);
  pinMode (SpeakerPin, OUTPUT);
  Serial.begin(9600);
}


void loop () {
  reading = digitalRead(inPin);
  if (reading == 1) {
    digitalWrite(RedLedPin, HIGH);  // if tilted, turn the red LED ON
    digitalWrite(GreenLedPin, LOW);
    tone(SpeakerPin, 1, 500);      // if tilted, turn the Speaker ON
   delay(500);
   
  } else {
    digitalWrite(RedLedPin, LOW);
    digitalWrite(GreenLedPin, HIGH);    // if not tilted, turn the green LED ON
  }
  Serial.println(reading); 
  
  delay(200);   // 
}


