//https://www.instructables.com/Raspberry-Pi-Arduino-Serial-Communication/

char dataString[50] = {0}; //this is just a test for connectivity 
int a =0;                  //must change char to get value from sensors see DOC SensorInfoXS.ino

void setup() {
Serial.begin(9600);              //Starting serial communication
}
  
void loop() {
  a++;                          // a value increase every loop
  sprintf(dataString,"%02X",a); // convert a value to hexa 
  Serial.println(dataString);   // send the data
  delay(1000);                  // give the loop some break
}
