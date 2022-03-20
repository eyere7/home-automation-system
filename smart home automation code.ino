char val;

int light = 2; // RELAY VALUE

void setup() {
  pinMode(light, OUTPUT);
  
  Serial.begin(9600);

}

void loop() {
  if (Serial.available()) {
    val = Serial.read();
    Serial.println();
  }
  if (val == '1')
  { digitalWrite(light, HIGH);
  Serial.println("LIGHT ON");

  }
  else if (val == '0')
  {
    digitalWrite(light, LOW);
    Serial.println("LIGHT OFF");
  }
 //delay(1000);
}



