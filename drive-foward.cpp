# include <stdio.h>
# include <time.h>
# include "E101.h"

int main (){
   // This sets up the RPi hardware and ensures
   // everything is working correctly
   init();
   // Setting motor speed, sleep, stop
   set_motor(1, 130);
   set_motor(2, 130);
   sleep1(0 ,500000);
   sleep1(0,500000);
   stop(1);
   stop(2);
return 0;
}
