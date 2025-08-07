//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////


// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__HARDSERIAL

#include <EEPROM.h>
#include <RemoteXY.h>
#include <NewPing.h>
#include <Servo.h>


#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 9600

//================================(defult)====================
#define servoPin A5
#define ULTRASONIC_SENSOR_TRIG 4
#define ULTRASONIC_SENSOR_ECHO 5

//================================(defult)====================
#define MAX_REGULAR_MOTOR_SPEED 150//75
#define MAX_MOTOR_ADJUST_SPEED 225//150
#define DISTANCE_TO_CHECK 30

//================================(defult)====================
NewPing mySensor(ULTRASONIC_SENSOR_TRIG, ULTRASONIC_SENSOR_ECHO, 400);
Servo myServo;

//================================(timer defult)====================



// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 918 bytes
  { 255,17,0,84,0,143,3,16,16,6,5,55,71,33,27,27,34,69,29,29,
  0,2,26,31,131,1,1,1,14,5,12,1,17,6,1,15,31,72,111,109,
  101,0,66,193,66,2,17,5,33,8,13,6,0,6,26,66,129,66,9,33,
  5,33,15,27,6,0,133,26,129,0,42,10,12,3,3,16,17,4,1,8,
  72,117,109,105,100,105,116,121,0,2,1,1,46,17,9,4,53,18,10,0,
  2,26,31,31,79,78,0,79,70,70,0,131,0,1,8,14,5,31,1,17,
  6,2,2,31,65,114,97,98,105,99,0,66,129,66,16,33,5,33,22,27,
  6,0,177,26,129,0,27,56,17,3,5,95,17,3,1,148,115,101,101,100,
  115,32,109,111,116,111,114,0,66,129,66,23,33,5,33,29,27,6,0,2,
  26,2,1,46,46,18,9,4,69,18,10,0,176,26,31,31,79,78,0,79,
  70,70,0,129,0,47,56,17,3,6,80,16,3,1,176,87,97,116,101,114,
  32,112,117,109,112,0,129,0,14,20,11,2,17,49,16,3,1,8,119,105,
  110,100,32,115,112,101,101,100,0,68,19,1,22,36,12,5,36,38,12,0,
  8,36,135,94,129,0,45,3,9,4,6,9,11,5,2,24,216,167,217,132,
  216,173,216,177,216,167,216,177,216,169,0,129,0,44,10,10,4,5,16,12,
  5,2,24,216,167,217,132,216,177,216,183,217,136,216,168,216,169,0,129,0,
  47,17,7,4,9,23,8,5,2,24,216,167,217,132,217,133,216,183,216,177,
  0,129,0,44,24,10,4,5,30,12,5,2,24,216,167,217,132,216,179,216,
  183,217,136,216,185,0,129,0,11,20,8,2,19,49,12,3,2,24,216,179,
  216,177,216,185,216,169,32,216,167,217,132,217,135,217,136,216,167,216,161,0,
  129,0,26,56,16,4,9,96,12,3,2,148,217,133,216,173,216,177,217,131,
  32,216,167,217,132,216,168,216,176,217,136,216,177,0,129,0,47,56,16,4,
  7,80,11,3,2,176,217,133,216,182,216,174,216,169,32,216,167,217,132,217,
  133,216,167,216,161,0,129,0,47,3,7,3,8,8,11,5,1,8,116,101,
  109,112,0,129,0,48,17,6,3,11,23,8,4,1,8,82,97,105,110,0,
  129,0,41,24,14,3,1,30,19,4,1,8,83,117,110,112,111,119,101,114,
  0,66,129,83,2,16,5,46,8,14,6,0,1,26,67,4,56,2,9,5,
  22,8,10,6,0,2,26,11,67,4,56,9,9,5,22,15,10,6,0,2,
  26,11,67,4,56,16,9,5,22,22,10,6,0,2,26,11,67,4,56,23,
  9,5,22,29,10,6,0,2,26,11,129,0,6,56,6,3,9,64,6,3,
  1,8,108,105,103,104,116,0,129,0,6,56,5,3,10,64,5,3,2,24,
  217,129,217,132,216,167,216,180,0,2,1,27,46,17,9,4,84,18,10,0,
  148,26,31,31,79,78,0,79,70,70,0,130,1,19,3,21,14,38,49,22,
  15,0,17,3,131,21,10,16,6,41,57,16,6,0,2,26,7,36,24,6,
  9,3,44,53,9,3,0,2,26,2,11,129,0,23,4,11,2,43,50,11,
  2,1,24,100,101,102,117,108,116,32,109,111,111,100,0,129,0,21,5,2,
  5,41,52,2,5,0,8,99,0,129,0,24,4,9,2,43,50,9,2,2,
  8,216,167,217,132,217,136,216,182,216,185,32,216,167,217,132,216,170,217,132,
  217,130,216,167,216,166,217,138,0,129,0,33,6,4,3,54,52,4,3,1,
  8,107,109,0,129,0,34,6,2,3,54,53,2,3,2,8,217,131,217,133,
  0,67,4,7,35,5,3,44,37,8,4,0,2,26,11,67,4,20,35,5,
  3,44,43,8,4,0,2,26,11,129,0,12,35,5,3,52,37,6,4,1,
  8,109,47,115,0,129,0,25,35,5,3,52,43,8,4,1,8,109,97,120,
  0,129,0,12,35,3,3,52,37,5,4,2,8,217,133,47,216,171,0,129,
  0,25,35,6,3,52,43,8,4,2,24,216,167,217,132,216,167,216,185,217,
  132,217,137,0,70,22,18,47,7,7,22,54,8,8,0,26,1,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  int8_t joystick_1_x; // from -100 to 100  
  int8_t joystick_1_y; // from -100 to 100  
  uint8_t switch_light; // =1 if switch ON and =0 if OFF 
  uint8_t switch_pump; // =1 if switch ON and =0 if OFF 
  uint8_t switch_seeds; // =1 if switch ON and =0 if OFF 
  uint8_t select_defult; // =0 if select position A, =1 if position B, =2 if position C, ... 
  char edit_km[11];  // string UTF8 end zero  

    // output variables
  int8_t level_temp_down; // =0..100 level position 
  int8_t level_hum; // =0..100 level position 
  int8_t linear_rain; // =0..100 level position 
  int8_t linear_sunpower; // =0..100 level position 
  float onlineGraph_wind_var1;
  float onlineGraph_wind_var2;
  float onlineGraph_wind_var3;
  int8_t level_temp_up; // =0..100 level position 
  char text_temp[11];  // string UTF8 end zero 
  char text_hum[11];  // string UTF8 end zero 
  char text_rain[11];  // string UTF8 end zero 
  char text_sunpower[11];  // string UTF8 end zero 
  char text_wind[11];  // string UTF8 end zero 
  char text_max_wind[11];  // string UTF8 end zero 
  uint8_t led_1; // led state 0 .. 1 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////


#define PIN_SWITCH_LIGHT 13
#define PIN_SWITCH_PUMP 3
#define PIN_SWITCH_SEEDS 12



//================================(rain sensor)====================
int Rain_signal = A0;

//========================(water level)==================================
//int Water_Level = A1;

//================================(sunpower sensor)====================
int sumpower = A2;


//================================(wind speed)====================
//float wind_speed = A3;
//float onlineGraph_wind_var1=0;
float onlineGraph_wind_var2=0;
float onlineGraph_wind_var3=0;
float maxW = 0;


//========================(DHT11)==================================
#include "DHT.h" 
#define DHTPIN 2 
DHT dht(DHTPIN, DHT11);
//====================================================================================

//================================(define right motor control pins)===================
int right_motor_A=8;
int right_motor_B=9;
int right_motor_speed=11; //enable pin

//================================(define left motor control pins)====================
int left_motor_A=6;
int left_motor_B=7;
int left_motor_speed=10; //enable pin

//=======================(define two arrays with a list of pins for each motor)=======
uint8_t RightMotor[3] = {right_motor_A, right_motor_B, right_motor_speed};
uint8_t LeftMotor[3] = {left_motor_A, left_motor_B, left_motor_speed};
 
//========================(speed control of motors)==================================
void Wheel (uint8_t * motor, int v) // v = motor speed, motor = pointer to an array of pins 
{
  if (v > 100) v=100;
  if (v < -100) v=-100;
  if (v > 0){

    digitalWrite (motor [0], HIGH);
    digitalWrite (motor [1], LOW);
    analogWrite (motor [2], v * 2.55);
  }
  else if ( v<0 ){

    digitalWrite (motor [0], LOW);
    digitalWrite (motor [1], HIGH);
    analogWrite (motor [2], (-v) * 2.55);
  }
  else{
    digitalWrite (motor [0], LOW);
    digitalWrite (motor [1], LOW);
    analogWrite (motor [2], 0);
  }
}


void setup() 
{

  RemoteXY_Init (); 


//================================(timer defult)====================


  //================================(defult)====================
//  myServo.attach(SERVO_PIN);  //error
//  myServo.write(90);
  // Set the servo to the 90-degree position
//  digitalWrite(servoPin, HIGH);
//  delayMicroseconds(1100); // 1.5 milliseconds
//  digitalWrite(servoPin, LOW);
//  delay(500);
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(1500); // 1.5 milliseconds
  digitalWrite(servoPin, LOW);

  rotateMotor(0,0);   
  // TODO you setup code

  //===============================(initialization pins)==============================
  pinMode (right_motor_A, OUTPUT);
  pinMode (right_motor_B, OUTPUT);
  pinMode (right_motor_speed, OUTPUT);
  pinMode (left_motor_A, OUTPUT);
  pinMode (left_motor_B, OUTPUT);
  pinMode (left_motor_speed, OUTPUT);
  //===================================================================================
  pinMode (PIN_SWITCH_LIGHT, OUTPUT);
  pinMode (PIN_SWITCH_PUMP, OUTPUT);
  pinMode (PIN_SWITCH_SEEDS, OUTPUT);

//================================(wind speed)====================
pinMode(A3, INPUT);
digitalWrite(A3,EEPROM.read(10));

//================================(esp32)====================
//  Serial.begin(9600);
  
}







void loop() 
{


  
  RemoteXY_Handler ();

if (RemoteXY.select_defult==0){

    //============================(manage motors direction & speed)======================
  Wheel (RightMotor, RemoteXY.joystick_1_y - RemoteXY.joystick_1_x);
  Wheel (LeftMotor, RemoteXY.joystick_1_y + RemoteXY.joystick_1_x);
}

    //============================(defult mood)======================
if (RemoteXY.select_defult==2){
//int left_motor_speed0=6;
//int left_motor_A=10;
//myServo.attach(SERVO_PIN);

  int distance = mySensor.ping_cm();

  //If distance is within 30 cm then adjust motor direction as below
  if (distance > 0 && distance < DISTANCE_TO_CHECK)
  {
    //Stop motors
    rotateMotor(0, 0);
    delay(500);  
       
    //Reverse motors
    rotateMotor(-MAX_MOTOR_ADJUST_SPEED, -MAX_MOTOR_ADJUST_SPEED);        
    delay(200);
    
    //Stop motors
    rotateMotor(0, 0);
    delay(500);




    
    //Rotate servo to left    
//    myServo.write(180);

  digitalWrite(servoPin, HIGH);
  delayMicroseconds(2400); // 2.0 milliseconds
  digitalWrite(servoPin, LOW);
    delay(500);
    

    //Read left side distance using ultrasonic sensor
    int distanceLeft = mySensor.ping_cm();    

    //Rotate servo to right
//    myServo.write(0); 
   
 // Set the servo to the 0-degree position
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(500); // 1.0 milliseconds//700
  digitalWrite(servoPin, LOW);
    delay(500);    

    //Read right side distance using ultrasonic sensor   
    int distanceRight = mySensor.ping_cm();

    //Bring servo to center
//    myServo.write(90); 

  // Set the servo to the 90-degree position
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(1400); // 1.5 milliseconds/1200
  digitalWrite(servoPin, LOW);
  
  delay(500);    

    if (distanceLeft == 0 )
    {
      rotateMotor(MAX_MOTOR_ADJUST_SPEED, -MAX_MOTOR_ADJUST_SPEED);
      delay(200);
    }
    else if (distanceRight == 0 )
    {
      rotateMotor(-MAX_MOTOR_ADJUST_SPEED, MAX_MOTOR_ADJUST_SPEED);
      delay(200);
    }
    else if (distanceLeft >= distanceRight)
    {
      rotateMotor(MAX_MOTOR_ADJUST_SPEED, -MAX_MOTOR_ADJUST_SPEED);
      delay(200);
    }
    else
    {
      rotateMotor(-MAX_MOTOR_ADJUST_SPEED, MAX_MOTOR_ADJUST_SPEED);
      delay(200);      
    }
    rotateMotor(0, 0);    
    delay(200);     
  }
  else
  {
    rotateMotor(MAX_REGULAR_MOTOR_SPEED, MAX_REGULAR_MOTOR_SPEED);
  }


  
}
    //============================(timer defult mood)======================
if (RemoteXY.select_defult==1){
int endMinute = atoi (RemoteXY.edit_km);  

// int currentMinute = timeClient.getMinutes();
//int currentHour = timeClient.getHours();

//  if (elapsedTime >= timerDuration)
{
    // Timer has expired, do something
//    Serial.println("Timer expired!");

    //========================================================
  int distance = mySensor.ping_cm();

  //If distance is within 30 cm then adjust motor direction as below
  if (distance > 0 && distance < DISTANCE_TO_CHECK)
  {
    //Stop motors
    rotateMotor(0, 0);
    delay(500);  
       
    //Reverse motors
    rotateMotor(-MAX_MOTOR_ADJUST_SPEED, -MAX_MOTOR_ADJUST_SPEED);        
    delay(200);
    
    //Stop motors
    rotateMotor(0, 0);
    delay(500);




    
    //Rotate servo to left    
//    myServo.write(180);

  digitalWrite(servoPin, HIGH);
  delayMicroseconds(2400); // 2.0 milliseconds
  digitalWrite(servoPin, LOW);
    delay(500);
    

    //Read left side distance using ultrasonic sensor
    int distanceLeft = mySensor.ping_cm();    

    //Rotate servo to right
//    myServo.write(0); 
   
 // Set the servo to the 0-degree position
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(500); // 1.0 milliseconds//700
  digitalWrite(servoPin, LOW);
    delay(500);    

    //Read right side distance using ultrasonic sensor   
    int distanceRight = mySensor.ping_cm();

    //Bring servo to center
//    myServo.write(90); 

  // Set the servo to the 90-degree position
  digitalWrite(servoPin, HIGH);
  delayMicroseconds(1400); // 1.5 milliseconds/1200
  digitalWrite(servoPin, LOW);
  
  delay(500);    

    if (distanceLeft == 0 )
    {
      rotateMotor(MAX_MOTOR_ADJUST_SPEED, -MAX_MOTOR_ADJUST_SPEED);
      delay(200);
    }
    else if (distanceRight == 0 )
    {
      rotateMotor(-MAX_MOTOR_ADJUST_SPEED, MAX_MOTOR_ADJUST_SPEED);
      delay(200);
    }
    else if (distanceLeft >= distanceRight)
    {
      rotateMotor(MAX_MOTOR_ADJUST_SPEED, -MAX_MOTOR_ADJUST_SPEED);
      delay(200);
    }
    else
    {
      rotateMotor(-MAX_MOTOR_ADJUST_SPEED, MAX_MOTOR_ADJUST_SPEED);
      delay(200);      
    }
    rotateMotor(0, 0);    
    delay(200);     
  }
  else
  {
    rotateMotor(MAX_REGULAR_MOTOR_SPEED, MAX_REGULAR_MOTOR_SPEED);
  }

    
  }
}


//========================(DHT11)==================================
float temp = dht.readTemperature();   
  float hum = dht.readHumidity(); 
  dtostrf(temp, 0, 1, RemoteXY.text_temp); 
  dtostrf(hum, 0, 1, RemoteXY.text_hum); 

//========================(DHT11)==================================
  if (temp<0) { 
    RemoteXY.level_temp_up = 0; 
    RemoteXY.level_temp_down = min (-temp*2,100); 
  } 
  else if (temp>0) { 
    RemoteXY.level_temp_up = min(temp*2,100); 
    RemoteXY.level_temp_down = 0; 
  } 
  else { 
    RemoteXY.level_temp_up = 0; 
    RemoteXY.level_temp_down = 0; 
  } 
  RemoteXY.level_hum = hum;
  

  //============================(rain)======================
 int Rain = analogRead(Rain_signal);
 if (Rain>700){
  Rain = 0;
 }
 Rain =Rain/10;
    RemoteXY.linear_rain = min(Rain*2,100);
    dtostrf(Rain, 0, 1, RemoteXY.text_rain);



    //========================(sumpower)==================================
    int   sumpowerA = analogRead(sumpower);
    sumpowerA = sumpowerA/10;
    RemoteXY.linear_sunpower = sumpowerA;
    dtostrf(sumpowerA, 0, 1, RemoteXY.text_sunpower);




    //================================(wind speed test)====================

    float volt = analogRead(A3);


    volt = (volt-580)/200  ;
    
    if (volt <0){
      volt = 0  ;
    }
    
    RemoteXY.onlineGraph_wind_var1 = volt;
  
  

    float wind = (volt*3/0.5*2.4);//

    RemoteXY.onlineGraph_wind_var2 = wind; // 204.8;
    
    if (wind>maxW){
     maxW = wind;
     RemoteXY.onlineGraph_wind_var3= max(wind, maxW);
     EEPROM.write(10,maxW);
    }

    dtostrf(wind, 0, 1, RemoteXY.text_wind);
    dtostrf(maxW, 0, 1, RemoteXY.text_max_wind);






  digitalWrite(PIN_SWITCH_LIGHT, (RemoteXY.switch_light==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_PUMP, (RemoteXY.switch_pump==1)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_SEEDS, (RemoteXY.switch_seeds==1)?LOW:HIGH);


    //========================(light rgb)==================================
  if (RemoteXY.switch_light!=0) {
     RemoteXY.led_1 = 1;
  }
  else {
      RemoteXY.led_1 = 0;
  }



  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay(), use instead RemoteXY_delay() 
}


void rotateMotor(int rightMotorSpeed, int leftMotorSpeed)
{
  if (RemoteXY.select_defult==2){
  if (rightMotorSpeed < 0)
  {
    digitalWrite(right_motor_A,LOW);
    digitalWrite(right_motor_B,HIGH);    
  }
  else if (rightMotorSpeed >= 0)
  {
    digitalWrite(right_motor_A,HIGH);
    digitalWrite(right_motor_B,LOW);      
  }

  if (leftMotorSpeed < 0)
  {
    digitalWrite(left_motor_A,LOW);
    digitalWrite(left_motor_B,HIGH);    
  }
  else if (leftMotorSpeed >= 0)
  {
    digitalWrite(left_motor_speed,HIGH);
    digitalWrite(left_motor_B,LOW);      
  }

  analogWrite(right_motor_speed, abs(rightMotorSpeed));
  analogWrite(left_motor_A, abs(leftMotorSpeed));    
}

}
