#include <stdio.h>
#include <string.h>

struct Student_info
{
    int age;
    char name[50];
    char dept[50];
    char roll[50];
    char number[60];
};

int main()
{
    struct Student_info s;

    printf("Enter the Name: ");
    fgets(s.name, 40, stdin);

    printf("Enter the Age: ");
    scanf("%d", &s.age);
    getchar();   

    printf("Enter the Department: ");
    fgets(s.dept, 40, stdin);

    printf("Enter the Roll: ");
    fgets(s.roll, 40, stdin);

    printf("Enter the Number: ");
    fgets(s.number, 40, stdin);

    printf("\n----- Student Information -----\n");

    printf("Name        : %s", s.name);
    printf("Age         : %d\n", s.age);
    printf("Department  : %s", s.dept);
    printf("Roll No     : %s", s.roll);
    printf("Number      : %s", s.number);

    return 0;
}
