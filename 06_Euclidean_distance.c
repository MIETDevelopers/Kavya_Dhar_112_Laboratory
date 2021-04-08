
// Creation date: 18-03-21
// Purpose:WAP for Finding Euclidean Distance   
#include <stdio.h> // Preprocessor to include the standard input and output funtions
#include <math.h> // Preprocessor to include the Mathematics Funtions

int main() // Start of body  
{
	float a, b, c, d, distance,E_distance; // variable declarztion 
	printf("Input A: "); // taking Value of A
	scanf("%f", &a);
	printf("Input B: ");//taking Value of B
	scanf("%f", &b);
    printf("Input C: ");//taking Value of C
	scanf("%f", &c);
	printf("Input d: ");//taking Value of D
	scanf("%f", &d);
	distance = ((c-a)*(c-a))+((d-b)*(d-b));// logic 
	E_distance=sqrt(distance);// applying Sqrt 
	printf("Distance between the said points: %f",E_distance); // printing output
	printf("\n"); // Printing all New statment 
	return 0; 
} // End of body 
