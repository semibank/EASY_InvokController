/*
  Class definition for Joystick.h library.
  Created by Thoby L. Noorhalim
  26 August 2021
*/

#include<Joystick.h>

// ---------- Constructor ----------
Joystick::Joystick(){};

void Joystick::updateData(std::vector<std::string> parsedData){
  setX(String(parsedData.at(1).c_str())); 
  setY(String(parsedData.at(2).c_str()));
  setR(String(parsedData.at(3).c_str())); 
  setTheta(String(parsedData.at(4).c_str()));
  setIntensity(String(parsedData.at(5).c_str()));
  setButtonState(parsedData.at(6));
}