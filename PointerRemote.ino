void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(4,OUTPUT); // Red LED output
  pinMode(5,OUTPUT); // Green LED output
  pinMode(2,OUTPUT); // Button output 
}

void loop() {
  int ButtonInteraction = analogRead(0);
  // put your main code here, to run repeatedly:

  if(ButtonInteraction == 0){
    analogWrite(5,0);
    analogWrite(4,255);   
    delay(500);      
    Serial.println("The device is ready for use");
 //   Serial.println(ButtonInteraction);
  }

  else if (ButtonInteraction > 120){
    analogWrite(5,255);
    analogWrite(4,0);        
    delay(500);
    Serial.println("The device is being used");
//    Serial.println(ButtonInteraction);

  }
}
