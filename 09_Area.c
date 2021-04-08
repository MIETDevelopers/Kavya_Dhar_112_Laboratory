//A C Program to calculate Area/Perimeter of different shapes.             
//Area of Square: side*side: side
//Area of Rectangle: Length * Breadth: Length, Breadth
//Area of Circle: (22/7)*r*r: radius 
#include <stdio.h>
#include <math.h>
int main(){
	char purpose;
	printf("Enter the mode of operation.\n 1.Area of Circle.\n 2.Area of Square.\n 3.Area of Rectangle.\n");
	scanf("%c", &purpose); //It will scan the operater entered by user.
	float value1, value2;
	printf("Enter values of the shape:\n");
	scanf("%f %f", &value1, &value2); //It will scan the numbers entered by user.
	switch(purpose) //Switch-Case Function used.
	{
		case'1':
			printf("Area of Circle = %f", ((22*value1*value1)/7));
			break;
		case'2':
			printf("Area of Square = %f", value1*value1);
			break;	
		case'3':
			printf("Area of Rectangle = %f", value1*value2);
			break;
		
		default:
            printf("Error eccoured, Please enter the values correctly!");	
	}
	return 0; 
}
