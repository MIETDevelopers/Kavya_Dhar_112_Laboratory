//A C Program to Find Sum of Digits of a Number using While Loop.
#include <stdio.h>
int main()
{
  int Number, Reminder, Sum=0;

  printf("Please Enter any number\n");
  scanf("%d", &Number);//This will scan (read) the number entered by user.

  while(Number > 0)//Using while loop.
  {
  	//This is the formula to calculate sum of digits.
     Reminder = Number % 10;
     Sum = Sum+Reminder;
     Number = Number / 10;
  }

  printf("Sum of the digits of Given Number = %d\n", Sum);

  return 0;
}