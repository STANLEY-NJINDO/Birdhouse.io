# program-issues
cant seem to upload any code to my arduino mega 2560 board via platformio in visual studio code
 below is my sample code (i'm a begineer in this field)


 
 #include <Arduino.h>

// put function declarations here:
#define 48 x
#define 50 y

void setup() {
  // put your setup code here, to run once:
 pinMode(x,OUTPUT);
 pinMode(y,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
}
digitalWrite(x,HIGH);
digitalWrite(y,LOW);
delay(1000);
digitalWrite(x,LOW);
digitalWrite(y,HIGH);
delay(1000);
// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}


but every time i try uploading i get this error message


Resolving megaatmega2560 dependencies...
Library Manager: Installing dlloydev/ESP32
UnknownPackageError: Could not find the package with 'dlloydev/ESP32' requirements for your system 'windows_amd64'
