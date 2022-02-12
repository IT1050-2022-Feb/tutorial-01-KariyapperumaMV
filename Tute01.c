/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int mark1,mark2,total=0; //initializing
  float avg;

  printf("Enter mark 01:");//prompt
  scanf("%d", &mark1);//read the value of mark 1

  printf("Enter mark 02:");//prompt
  scanf ("%d" , &mark2);//read the value for mark 2

  total = mark1 + mark2; // caculate total

  avg = total/2; //calculate average

  printf("Average = %.2f", avg);//print total
  
  return 0;
}

