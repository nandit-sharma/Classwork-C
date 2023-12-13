#include <stdio.h>

struct  student
{
    char name[5];
    int roll;
    int marks;
    int age;
    char sex[10];
    char address[200];
};
void main() {
    struct student s1;
    printf("Enter name: ");
    scanf("%s", &s1.name);
    printf("Enter roll: ");
    scanf("%d", &s1.roll);
    printf("Enter sex: ");
    scanf("%s", &s1.sex);
    printf("Enter age: ");
    scanf("%d", &s1.age);
    printf("Enter marks: ");
    scanf("%d", &s1.marks);
    printf("Enter address: ");
    scanf("%s", &s1.address);

    printf("----------THE STRUCTURE MEMBERS----------\n");
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Sex: %s\n", s1.sex);
    printf("Age: %d\n", s1.age);
    printf("Marks: %d\n", s1.marks);
    printf("Address: %s\n", s1.address);
}