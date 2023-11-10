/*
  Class definition for ColorData.h library.
  Created by Thoby L. Noorhalim
  1 September 2021
*/

#include <ColorData.h>

// Constructor
ColorData::ColorData(){};

// ---------- Setters ----------
void ColorData::setA(String a){
  this->a = a.toInt();
}

void ColorData::setR(String r){
  this->r = atoi(r.c_str());
}

void ColorData::setG(String g){
  this->g = atoi(g.c_str());
}

void ColorData::setB(String b){
  this->b = atof(b.c_str());
}

void ColorData::setH(String h){
  this->h = atof(h.c_str());
}

void ColorData::setS(String s){
  this->s = atof(s.c_str());
}

void ColorData::setV(String v){
  this->v = atof(v.c_str());
}


// ---------- Getters ----------
int ColorData::getA(){
  return this->a;
}

int ColorData::getR(){
  return this->r;
}

int ColorData::getG(){
  return this->g;
}

int ColorData::getB(){
  return this->b;
}

double ColorData::getH(){
  return this->h;
}

double ColorData::getS(){
  return this->s;
}

double ColorData::getV(){
  return this->v;
}