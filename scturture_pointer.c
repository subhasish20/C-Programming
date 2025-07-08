#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    int class;
};

int main()
{
    //struct student s; // Declare a struct student variable
    struct student *p ; // Declare a pointer to struct student and point it to s

    printf("enter the name : ");
    scanf("%s", p->name); // Use p->name to store the name

    printf("enter the roll : ");
    scanf("%d", &p->roll); // Use &p->roll to store the roll

    printf("enter the class : ");
    scanf("%d", &p->class); // Use &p->class to store the class

    printf("name is : %s\n", p->name);
    printf("roll is : %d\n", p->roll);
    printf("class is : %d\n", p->class);

    return 0;
}

