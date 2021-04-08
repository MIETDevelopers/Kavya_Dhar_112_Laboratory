// C Program to sort an array in ascending order using Insertion Sort.         
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    int arr[64];
    //This will determine the limit of values according to user input.
    printf("Enter number of elements\n");
    scanf("%d", &n);
 
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1 ; i <= n - 1; i++) //Using for loop.
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {
            //Swap function will help for the purpose.       
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    //This will give the output.
    printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
} //End
