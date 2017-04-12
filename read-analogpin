#include <stdio.h>
#include <time.h>
#include "E101.h"

int main(){
  //This sets up the RPi hardware and ensures
  //everything is working correctly
  init();
  //We declare an integer variable to store the ADC data
  int adc_reading1;
  int adc_reading2;
  int adc_reading3;
  
  //Reads from Analog Pin 0 (A0)
  adc_reading1 = read_analog(0);
  printf("Input 0: %d\n", adc_reading1);
  sleep1(1,0);
  
  adc_reading2 = read_analog(2);
  printf("Input 2: %d\n", adc_reading2);
  sleep1(1,0);
  
  adc_reading3 = read_analog(4);
  printf("Input 4: %d\n", adc_reading3);
  sleep1(1,0);
return 0;
