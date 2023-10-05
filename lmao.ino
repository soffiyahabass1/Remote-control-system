int dir1PinA = 3;
int dir2PinA = 4;
int dir3PinA = 5;
int dir4PinA = 6;
int dir5PinA = 7;
int dir6PinA = 8;
int dir7PinA = 9;
int dir8PinA = 10;
void setup() { 
 
Serial.begin(9600); // baud rate



pinMode(dir1PinA,OUTPUT);
pinMode(dir2PinA,OUTPUT);
pinMode(dir3PinA,OUTPUT);
pinMode(dir4PinA,OUTPUT);        
pinMode(dir5PinA,OUTPUT);
pinMode(dir6PinA,OUTPUT);
pinMode(dir7PinA,OUTPUT);
pinMode(dir8PinA,OUTPUT);

}
void loop() {
if (Serial.available() > 0) {
int inByte = Serial.read();

switch (inByte) {

case 'F': // Clockwise rotation
digitalWrite(dir1PinA, HIGH);
digitalWrite(dir2PinA, LOW);
digitalWrite(dir3PinA, LOW);
digitalWrite(dir4PinA, HIGH);
digitalWrite(dir5PinA, LOW);
digitalWrite(dir6PinA, HIGH);
digitalWrite(dir7PinA, HIGH);
digitalWrite(dir8PinA, LOW);
Serial.println("Forward rotation"); 
Serial.println("   "); 
break;

case 'S': // No rotation
digitalWrite(dir1PinA, LOW);
digitalWrite(dir2PinA, LOW);
digitalWrite(dir3PinA, LOW);
digitalWrite(dir4PinA, LOW);
digitalWrite(dir5PinA, LOW);
digitalWrite(dir6PinA, LOW);
digitalWrite(dir7PinA, LOW);
digitalWrite(dir8PinA, LOW);
Serial.println("No rotation");
Serial.println("   ");
break;

case 'B': // Clockwise rotation
digitalWrite(dir1PinA, LOW);
digitalWrite(dir2PinA, HIGH);
digitalWrite(dir3PinA, HIGH);
digitalWrite(dir4PinA, LOW);
digitalWrite(dir5PinA, HIGH);
digitalWrite(dir8PinA, LOW);
digitalWrite(dir7PinA, LOW);
digitalWrite(dir8PinA, HIGH);
Serial.println("Backward rotation"); 
Serial.println("   "); 
break;

case 'R': // Clockwise rotation
digitalWrite(dir1PinA, HIGH);
digitalWrite(dir2PinA, LOW);
digitalWrite(dir3PinA, LOW);
digitalWrite(dir4PinA, HIGH);
digitalWrite(dir5PinA, HIGH);
digitalWrite(dir8PinA, LOW);
digitalWrite(dir7PinA, LOW);
digitalWrite(dir8PinA, HIGH);
Serial.println("right rotation"); 
Serial.println("   "); 
break;

case 'L': // Clockwise rotation
digitalWrite(dir1PinA, LOW);
digitalWrite(dir2PinA, HIGH);
digitalWrite(dir3PinA, HIGH);
digitalWrite(dir4PinA, LOW);
digitalWrite(dir5PinA, LOW);
digitalWrite(dir8PinA, HIGH);
digitalWrite(dir7PinA, HIGH);
digitalWrite(dir8PinA, LOW);
Serial.println(" Left rotation"); 
Serial.println("   "); 
break;
}
}
}
