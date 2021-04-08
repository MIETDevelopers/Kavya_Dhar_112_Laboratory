// A C Program to read and print elements in two dimensional array
#include<stdio.h>
int main(){
   /* 2D array declaration*/
   int disp[3][4];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<3; i++) {
      for(j=0;j<4;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<3; i++) {
      for(j=0;j<4;j++) {
         printf("%d \n", disp[i][j]);
         if(j==4){
            printf("\n");
         }
      }
   }
   return 0;
} 
