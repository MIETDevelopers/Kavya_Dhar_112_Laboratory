
#include <stdio.h>
#include <conio.h>

int main()
{
  int i,num,n,large=0;

  //It will set the maximum number (Limit) of values to be entered by user based on their choice.
  printf("How many numbers: ");
  scanf("%d",&n); 
  
  for(i=0; i<n; i++)
  {
    //It will scan the numbers entered by user upto the limit setted by user.
    printf("\nEnter number %d: ",i+1);
    scanf("%d",&num);
    if(num>large)
    large=num;
  }

  printf("\nThe Largest number is %d",large); //It will give the largest number as the output.
  
  getch();
  return 0;
}


