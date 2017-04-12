#include <stdio.h>
#include <time.h>
#include "E101.h"

int main(){
  //This sets up the RPi hardware and ensures
  //everything is working correctly
  init();
  //We declare an integer variable to store the ADC data
  int adc_reading1;
  int adc_mean;
  
  //Reads from Analog Pin 0 (A0)
  for (int i = 0; i < 5; i++) {
    adc_reading1 = read_analog(0);
    sleep1(1,0);
    adc_mean = adc_mean + adc_reading1;
  }
  adc_mean = adc_mean / 5;
  printf("Mean reading: %d\n", adc_mean);
return 0;
}
