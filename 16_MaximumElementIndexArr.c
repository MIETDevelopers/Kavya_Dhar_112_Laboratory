//A C Program to find the largest number in a user entered array.
#include<stdio.h>
int main(){
	int i;
	float arr[5];

	printf("Please enter five numbers:\n ");

	for (i = 0; i < 5; ++i) //Using for loop.
	{
    scanf("%f", &arr[i]);//Scanning the user entered values.
	}

		for (i = 1; i < 5; ++i)
		{
			//Determing the largest value.
    	if (arr[0] < arr[i])
        	arr[0] = arr[i];
		}
	printf("Largest element = %.2f", arr[0]);//Printing the largest value.

	return 0;
}