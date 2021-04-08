//A C Program to calculate Factorial of a number.               
#include<stdio.h>  
int main()    
{    
 int i,fact=1,n=5;        
  scanf("%d",&n);    //It will scan the number entered by user.
    for(i=1;i<=n;i++){    
      fact=fact*i;   //Formula 
  }    
  printf("Factorial of %d is: %d",n,fact);    //This will give us output.
return 0;  
}
