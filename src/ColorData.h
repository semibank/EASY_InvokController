/*
  ColorData.h - Library for defining and storing
  raw values from string, sent by the app.
  Created by Thoby L. Noorhalim.
  1 September 2021.
*/

#ifndef COLOR_DATA_H
#define COLOR_DATA_H
#include <Arduino.h>
#include <string>

class ColorData{
  private:
    int a = 0;
    int r = 0;
    int g = 0;
    int b = 0;
    double h = 0.0;
    double s = 0.0;
    double v = 0.0;
  
  public:
    // ---------- Constructor ----------
    ColorData();

    // ---------- Setters ----------
    void setA(String a);
    void setR(String r);
    void setG(String g);
    void setB(String b);
    void setH(String h);
    void setS(String s);
    void setV(String v);


    // ---------- Getters ----------
    int getA();
    int getR();
    int getG();
    int getB();
    double getH();
    double getS();
    double getV();
};

#endif