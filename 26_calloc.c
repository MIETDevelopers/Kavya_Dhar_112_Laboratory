// A C Program demonstrating use of calloc() function.     
#include <stdio.h> //Using standard input output header file.
#include <stdlib.h> //Using standard library header file.
    int main() {
        int i, * ptr, sum = 0;
        ptr = calloc(10, sizeof(int));
        if (ptr == NULL) {
            printf("Error! memory not allocated.");
            exit(0);
        }
        printf("Building and calculating the sequence sum of the first 10 terms \n ");
        for (i = 0; i < 10; ++i) { * (ptr + i) = i;
            sum += * (ptr + i);
        }
        printf("Sum = %d", sum);
        free(ptr);
        return 0;
    }
