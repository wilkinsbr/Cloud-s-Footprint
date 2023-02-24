void setup() {

  //Red
  pinMode(13,OUTPUT);       // Set pin 13 to output
  pinMode(12,OUTPUT);       // Set pin 12 to output

  //Blue
  pinMode(11,OUTPUT);       // Set pin 11 to output
  pinMode(10,OUTPUT);       // Set pin 10 to output

  //Green
  pinMode(9,OUTPUT);       // Set pin 9 to output
  pinMode(8,OUTPUT);       // Set pin 8 to output

  //Yellow
  pinMode(7,OUTPUT);       // Set pin 7 to output
  pinMode(6,OUTPUT);       // Set pin 6 to output

  //Initialize

  blinkLoop();            //Cycling blink loop
  allBlink();             // Blinking all at once

  blinkRed();             //Red
  blinkBlue();            //Blue
  blinkGreen();           //Green
  blinkYellow();          //Yellow
}



void loop() {     
  
  blinkLoop();           //Cycling blink loop 
  allBlink();            //All Blinking
}


void allBlink() {   

  for(int i=0; i<10; i=i+1) {
        
    digitalWrite(13, HIGH); //Red 1
    digitalWrite(12, HIGH); //Red 2
    digitalWrite(11, HIGH); //Blue 1
    digitalWrite(10, HIGH); //Blue 2
    digitalWrite(9, HIGH);  //Green 1
    digitalWrite(8, HIGH);  //Green 2
    digitalWrite(7, HIGH);  //Yellow 1
    digitalWrite(6, HIGH);  //Yellow 2
    delay(4360);              // Wait 4.36 seconds
    digitalWrite(13, LOW);  //Red 1
    digitalWrite(12, LOW);  //Red 2
    digitalWrite(11, LOW);  //Blue 1
    digitalWrite(10, LOW);  //Blue 2
    digitalWrite(9, LOW);   //Green 1
    digitalWrite(8, LOW);   //Green 2
    digitalWrite(7, LOW);   //Yellow 1
    digitalWrite(6, LOW);   //Yellow 2
    delay(4360);              // Wait 4.36 seconds
    }

}

void blinkLoop() {        //Cycling blink loop

  for(int i=0; i<1; i=i+1) {
    blinkRed();            // Red LED's 1 & 2
    delay(5000);             // Wait 5 seconds
    blinkBlue();           // Blue LED's 1 & 2
    delay(5000);             // Wait 5 seconds
    blinkGreen();          // Green LED's 1 & 2
    delay(5000);             // Wait 5 seconds
    blinkYellow();         // Yellow LED's 1 & 2
    delay(5000);            // Wait 5 seconds
  }   
}


void blinkRed() {
          
  for(int i=0; i<10; i=i+1) {
    digitalWrite(13, HIGH);   // Red 1
    digitalWrite(12, HIGH);   // Red 2
    delay(290);                 //Wait .29 sec               
    digitalWrite(13, LOW);    // Red 1 
    digitalWrite(12, LOW);    // Red 2
    delay(290);                  //Wait .29 sec
  }
}

void blinkBlue() {
  
  for(int i=0; i<10; i=i+1) {
    digitalWrite(11, HIGH);   //Blue 1
    digitalWrite(10, HIGH);   //Blue 2
    delay(970);                 //Wait .97 sec
    digitalWrite(11, LOW);    //Blue 1
    digitalWrite(10, LOW);    //Blue 2
    delay(970);                 //Wait .97 sec  
  }
} 

void blinkGreen() {
  
  for(int i=0; i<10; i=i+1) {
    digitalWrite(9, HIGH);    //Green 1
    digitalWrite(8, HIGH);    //Green 2
    delay(1500);                  //Wait 1.5 sec
    digitalWrite(9, LOW);     //Green 1
    digitalWrite(8, LOW);     //Green 2
    delay(1500);                  //Wait 1.5 sec
  }
}

void blinkYellow() {
  
  for(int i=0; i<5; i=i+1) {
    digitalWrite(7, HIGH);    //Yellow 1
    digitalWrite(6, HIGH);    //Yellow 2
    delay(2800);                  //Wait 2.8 sec
    digitalWrite(7, LOW);     //Yellow 1
    digitalWrite(6, LOW);     //Yellow 2
    delay(2800);                  //Wait 2.8 sec
  }
}

