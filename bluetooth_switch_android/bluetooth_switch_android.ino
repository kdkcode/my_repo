#include <SoftwareSerial.h>
#include <Servo.h>
Servo myservo5;
Servo myservo6;
SoftwareSerial HC05(2, 3);



void setup() {
  
  HC05.begin(9600);
  myservo6.attach(6);
  myservo6.write(130);
  myservo5.attach(5);
  myservo5.write(40);
  Serial.println("Bluetooth Module Setup Mode");
}

void loop() {

  if(HC05.available()){
    int value=HC05.read();
      if (value=='a'){
        Serial.println("off");
        myservo6.write(70);
        delay(250);
        myservo6.write(130);
      }
      if (value=='b'){
        Serial.println("on");
        myservo5.write(90);
        delay(200);
        myservo5.write(40);
      }

    
  }







//https://www.youtube.com/watch?v=Tpd0eR1AyYY <-링크 도움 받음
  
//  int myString = "";
//  while (HC05.available())
//  {
//    char myChar = (char)HC05.read();
//    myString += myChar;
//    delay(5);
//  }
//
//  if (!myString.equals("0")) {     //블루투스가 연결되어 사용 가능하다면
//    if (myString=="o") {
//      myservo5.write(70);
//      delay(200);
//      myservo5.write(130);
//    } else if (myString=="f") {
//      myservo6.write(90);
//      delay(200);
//      myservo6.write(40);
//    }
//    Serial.println(myString);
//  }
}
