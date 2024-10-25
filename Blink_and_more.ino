


# define LED 0
# define BUZZ 1
# define BUT 2
byte BUT_S = 0;


void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUZZ, OUTPUT);
  pinMode(BUT, INPUT_PULLUP);
}


void loop() {
  BUT_S = digitalRead(BUT);
  if(BUT_S == LOW){
  digitalWrite(LED, HIGH);
  digitalWrite(BUZZ, LOW);   
  delay(400);                     
  digitalWrite(LED, LOW);   
  digitalWrite(BUZZ, HIGH); 
  delay(400);      
  digitalWrite(BUZZ, LOW); 
  } else {  
  digitalWrite(LED, HIGH);
  delay(200);                     
  digitalWrite(LED, LOW);   
  delay(200);     
  }            
}
