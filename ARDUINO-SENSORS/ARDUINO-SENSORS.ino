// temp sensor variable
float Temperatura;
// tmp sensor pin
int LM35=A1;

// pir sensor movmimiento variable
int Pirdata;
// pir sensor pin
int pir=7;

// Sensor ldr variable
int LdrData=0;
// ldr sensor pin
int pinFoto=A0;

void setup(){
    // Declare console.log
  Serial.begin (9600);
    // Declare inputs for sensor pins
  pinMode(LM35,INPUT);
    pinMode(pir,INPUT);
    pinMode(A0,INPUT);
}
 
void loop(){
  Temperatura=(analogRead(LM35)*(0.49))-50;
    Pirdata=digitalRead(pir);
    LdrData = analogRead(pinFoto);
  
  Serial.println(Temperatura);
    Serial.println(Pirdata);
    Serial.println(LdrData);
  delay (500);
    
}
