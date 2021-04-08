//A C Program to read the string in pointers loaction and give it as output.(Pre-Defined) 	
#include <stdio.h>

int main(void) {
  char name[] = "Aryan Sharma";

  printf("%c \n", *name);     	// Output will be A
  printf("%c \n", *(name+3));	// Output will be a
  printf("%c \n", *(name+8));   // Output will be a

  char *namePtr;

  namePtr = name;
  printf("%c \n", *namePtr);     // Output will be A
  printf("%c \n", *(namePtr+2)); // Output will be y
  printf("%c \n", *(namePtr+7)); // Output will be h
}
