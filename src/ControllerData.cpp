/*
  Class definition for ControllerData.h library.
  Created by Thoby L. Noorhalim
  26 August 2021
*/

#include <ControllerData.h>

// ---------- Constructor ----------
ControllerData::ControllerData(){};

// ---------- Setters ----------
void ControllerData::setX(String x){
  this->x = atof(x.c_str());
}

void ControllerData::setY(String y){
  this->y = atof(y.c_str());
}

void ControllerData::setR(String r){
  this->r = atof(r.c_str());
}

void ControllerData::setTheta(String theta){
  this->theta = atof(theta.c_str());
}

void ControllerData::setIntensity(String intensity){
  this->intensity = atof(intensity.c_str());
}

void ControllerData::setButtonState(std::string state){
  if(state.compare("true") == 0){
    this->buttonState = true;
  } else {
    this->buttonState = false;
  }
}



// ---------- Getters ----------
double ControllerData::getX(){
  return this->x;
}

double ControllerData::getY(){
  return this->y;
}

double ControllerData::getR(){
  return this->r;
}

double ControllerData::getTheta(){
  return this->theta;
}

double ControllerData::getIntensity(){
  return this->intensity;
}

bool ControllerData::getButtonState(){
  return this->buttonState;
}


