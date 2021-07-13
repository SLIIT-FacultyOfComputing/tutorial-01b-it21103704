/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>  //Adding Headerfiles

int main() 
{

  float sub1,sub2;
  float total,average;  //Declaring Variables

  printf("Enter Subject 1 Marks : \n");  //Getting Sub 1 Marks From User
  scanf("%f", &sub1);

  printf("Enter Subject 2 Marks : \n");  //Getting Sub 2 Marks From User
  scanf("%f", &sub2);

  total = sub1 + sub2;  //Calculate total
  average = total/2.0;  //Calculate average

  printf("Total marks = %.2f\n", total);  //Printing Total
  printf("Average marks = %.2f\n", average);  //printing average


  return 0;
}

