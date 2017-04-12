#include <stdio.h>
#include<time.h>
#include"E101.h"

int main(){
  //This sets up the RPi hardware and ensures
  //everything is working correctly
  init();
  //We declare an integer variable to store the ADC data
  int adc_reading1;
  int adc_max = 0;
  int adc_min = 1000;
  int adc_halfRange;
  
  //Reads from Analog Pin 0 (A0)
  for (int i = 0; i < 10; i++) {
    adc_reading1 = read_analog(0);
    sleep1(0,500000);
    
    if (adc_reading1 > adc_max) {
      adc_max = adc_reading1;
    }
    if (adc_reading1 < adc_min) {
      adc_min = adc_reading1;
    }
  }
  adc_halfRange = (adc_max + adc_min) / 2;
  printf("Max reading: %d\n", adc_max);
  printf("Min reading: %d\n", adc_min);
  printf("Half Range reading: %d\n", adc_halfRange);
return 0;
}
