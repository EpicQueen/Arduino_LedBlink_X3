int LED1= 8;
int LED2= 9;
int LED3= 10;

void setup() {
  // inicializa variables LED como salidas digitales
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}


void loop() {
  digitalWrite(LED1, HIGH);  // Prende el LED1
   digitalWrite(LED3, LOW);  // Prende el LED3
  digitalWrite(LED2, LOW);  // Prende el LED3


  delay(50);              // Espera: 1 segundo= 1000 miliseugundos
  
  digitalWrite(LED2, HIGH);  // Prende el LED1
  digitalWrite(LED1, LOW);  // Prende el LED3
  digitalWrite(LED3, LOW);  // Prende el LED3


  delay(50); 

  digitalWrite(LED3, HIGH);  // Prende el LED1
  digitalWrite(LED1, LOW);  // Prende el LED3
  digitalWrite(LED2, LOW);  // Prende el LED3


  delay(50); 

}


