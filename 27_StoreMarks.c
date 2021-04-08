//A C Program to store the information of student marks using structures and find total marks of individual student.
#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float attendance;
    float marks;
} s;

int main() {
    //This will read the user input.
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Attendance: ");
    scanf("%f", &s.attendance);

    //This will print the user input.
    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);
    printf("Attendance: %.1f\n;",s.attendance);

    return 0;
}