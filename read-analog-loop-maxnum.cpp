#include <stdio.h>
#include <time.h>
#include "E101.h"

int main(){
  //This sets up the RPi hardware and ensures
  //everything is working correctly
  init();
  //We declare an integer variable to store the ADC data
  int adc_reading1;
  int adc_max = 0;
  
  //Reads from Analog Pin 0 (A0)
  for (int i = 0; i < 10; i++) {
  
    adc_reading1 = read_analog(0);
    sleep1(1,0);
    if (adc_reading1 > adc_max) {
      adc_max = adc_reading1;
    }
  }
  printf("Max reading: %d\n", adc_max);
return 0;
}
