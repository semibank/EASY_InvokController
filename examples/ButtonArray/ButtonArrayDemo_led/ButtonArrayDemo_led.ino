//#include <ArduinoSTL.h>

#include <Arduino.h>
#include <InvokController.h>

Controller myController("websocket", 80, false);

void setup() {
    Serial.begin(115200);
    pinMode(2,OUTPUT);
    
    myController.setHostname("Button Array"); // mDNS    
    myController.begin();
    Serial.println("");
    
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
    
}

void loop() {

    if (myController.isDataArrived()){
        Serial.printf("Button State [%s] | [%s] | [%s] | [%s] | [%s] | [%s] | [%s] | [%s] | [%s] | [%s] | [%s] | [%s]\n", 
        myController.buttonArray.getButtonArrayState(0) ? "1" : "0",
        myController.buttonArray.getButtonArrayState(1) ? "1" : "0",
        myController.buttonArray.getButtonArrayState(2) ? "1" : "0",
        myController.buttonArray.getButtonArrayState(3) ? "1" : "0",
        myController.buttonArray.getButtonArrayState(4) ? "1" : "0",
        myController.buttonArray.getButtonArrayState(5) ? "1" : "0",
        myController.buttonArray.getButtonArrayState(6) ? "1" : "0",
        myController.buttonArray.getButtonArrayState(7) ? "1" : "0",
        myController.buttonArray.getButtonArrayState(8) ? "1" : "0",
        myController.buttonArray.getButtonArrayState(9) ? "1" : "0",
        myController.buttonArray.getButtonArrayState(10) ? "1" : "0",
        myController.buttonArray.getButtonArrayState(11) ? "1" : "0");
        myController.setDataArrived(false); // Flush, reset flag
    }
    if(myController.buttonArray.getButtonArrayState(0)== 1)
        digitalWrite(2,LOW);
    else
        digitalWrite(2,HIGH);
    
    // Controller Loop
    myController.loop();
}
