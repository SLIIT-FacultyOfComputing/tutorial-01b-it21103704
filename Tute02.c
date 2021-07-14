/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>  //Adding Headerfiles

int main() 
{

  int Distance,Amount,a,b;   //Declare Variables

  printf("Enter Distance : ");
  scanf("%d", &Distance);   //Getting Distance Info From User

   if(Distance <= 30)
    {
       a = Distance*50;
    }

    else if(Distance > 30)
    {
       b = Distance*40; 
    }

    Amount = a+b;  //Getting Final Amount


  
  return 0;
}
