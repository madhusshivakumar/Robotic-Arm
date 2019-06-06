#incluse<Servo.h>
Servo T;    // Assign Servo for Thumb
Servo I;    // Assign Servo for Index finger
Servo M;    // Assign Servo for Middle finger
Servo R;    // Assign Servo for Ring finger
Servo P;    // Assign Servo for Pinky finger

int FT = A1; // assign analog pin A1 for thumb finger
int FI = A2; // assign analog pin A2 for index finger
int FM = A3; // assign analog pin A3 for middle finger
int FR = A4; // assign analog pin A4 for ring finger
int FP = A5; // assign analog pin A5 for pinky finger

int VT; // Value for Thumb servo
int VI; // Value for Index servo
int VM; // Value for Middle servo
int VR; // Value for Ring servo
int VP; // Value for Pinky servo

void setup() {
  T.attach(11); // Attach digital pin 11 to Thumb servo
  I.attach(10); // Attach digital pin 10 to Index servo
  M.attach(6);  // Attach digital pin 11 to Middle servo
  R.attach(5);  // Attach digital pin 11 to Ring servo
  P.attach(3);  // Attach digital pin 11 to Pibky servo
  Serial.begin(9600);
}

void loop() {
  
  VT = analogRead(FT); // Read Values from thumb flex sensor
  VT = map(VT,270,120,180,0); // Map the range of the sensor reading within the range of 180-0
  if(VT<110){
    VT = 0;       // difine the position of servo angle  based on the mapped servo value
  }
  if(VT>110){
    VT = 180;     // difine the position of servo angle  based on the mapped servo value
  }
  T.write(VT);    // write the value into the servo

  VI = analogRead(FI); // Read Values from Index flex sensor
  VT = map(VI,270,120,180,0); // Map the range of the sensor reading within the range of 180-0
  if(VI<110){
    VI = 0;       // difine the position of servo angle based on the mapped servo value
  }
  if(VI>110){
    VI = 180;     // difine the position of servo angle based on the mapped servo value
  }
  I.write(VI);    // write the value into the servo

  VM = analogRead(VM);
  VM = map(VM,270,120,180,0);
  if(VM<110){
    VM = 0;
  }
  if(VM>110){
    VM = 180;
  }
  M.write(VM);

 
  VR = analogRead(VR);
  VR = map(VR,170,70,0,180);
  if(VR<90){
    VR = 0;
  }
  if(VR>90){
    VR = 180;
  }
  R.write(VR);

  VP = analogRead(VP);
  VP = map(VP,170,70,0,180);
  if(VP<90){
    VP = 0;
  }
  if(VP>90){
    VP = 180;
  }
  P.write(VP);
  
}
