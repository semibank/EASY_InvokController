/*
  Class definition for Motion.h library.
  Created by Thoby L. Noorhalim
  6 May 2023
*/

#include<Motion.h>

// ---------- Constructor ----------
Motion::Motion(){};

void Motion::updateData(std::vector<std::string> parsedData){
  
  setX(String(parsedData.at(1).c_str())); 
  setY(String(parsedData.at(2).c_str())); 
  setR(String(parsedData.at(3).c_str())); 
  setTheta(String(parsedData.at(4).c_str())); 
  setIntensity(String(parsedData.at(5).c_str())); 
}