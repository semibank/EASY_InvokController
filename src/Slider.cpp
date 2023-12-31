/*
  Class definition for Slider.h library.
  Created by Thoby L. Noorhalim
  28 September 2021
*/

#include<Slider.h>

// ---------- Constructor ----------
Slider::Slider(){};

void Slider::updateData(std::vector<std::string> parsedData){
  for (size_t i = 0; i < (sizeof(this->sliderData)/sizeof(this->sliderData[0])); i++)
  {
    //this->sliderData[i] = stod(parsedData.at(i+1));
    this->sliderData[i] = atof(parsedData.at(i+1).c_str());



  }
}

double Slider::getSliderData(int whichSlider){
  return this->sliderData[whichSlider];
}