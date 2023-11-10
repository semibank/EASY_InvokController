/*
  Class definition for ColorPicker.h library.
  Created by Thoby L. Noorhalim
  1 September 2021
*/

#include<ColorPicker.h>

// ---------- Constructor ----------
ColorPicker::ColorPicker(){};

void ColorPicker::updateData(std::vector<std::string> parsedData){
  /*setA(parsedData.at(1)); setR(parsedData.at(2));
  setG(parsedData.at(3)); setB(parsedData.at(4));
  setH(parsedData.at(5)); setS(parsedData.at(6));
  setV(parsedData.at(6));*/
  setA(String(parsedData.at(1).c_str())); 
  setR(String(parsedData.at(2).c_str())); 
  setG(String(parsedData.at(3).c_str())); 
  setB(String(parsedData.at(4).c_str())); 
  setH(String(parsedData.at(5).c_str())); 
  setS(String(parsedData.at(6).c_str())); 
  setV(String(parsedData.at(7).c_str())); 
}