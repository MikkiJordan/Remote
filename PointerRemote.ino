void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4,OUTPUT); // Red LED output
  pinMode(5,OUTPUT); // Green LED output
  pinMode(2,OUTPUT); // Button output 
  pinMode(6, OUTPUT); // Infered LED output
}

void loop() {
  int ButtonInteraction = digitalRead(3);
  // put your main code here, to run repeatedly:

  if(ButtonInteraction == LOW){
    analogWrite(6,0);
    analogWrite(5,0);
    analogWrite(4,200);   
    delay(100);      
    Serial.println("The device is ready for use...");
  }

  else if (ButtonInteraction == HIGH){
    analogWrite(6,50);
    analogWrite(5,200);
    analogWrite(4,0);       
    delay(100);
    Serial.println("The device is being used...");
  }
}
