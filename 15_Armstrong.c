
#include <stdio.h>
int main() {
  int num, originalNum, remainder, result = 0;
  printf("Enter a three-digit integer: \n");
  scanf("%d", &num);//It will scan the operater entered by user.
  originalNum = num;

  while (originalNum != 0) {
     //Formula
     // remainder contains the last digit
    remainder = originalNum % 10;
        
    result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
    originalNum /= 10;
  }

  if (result == num)
      printf("%d is an Armstrong number.", num);
  else
      printf("%d is not an Armstrong number.", num);

  return 0;
}
