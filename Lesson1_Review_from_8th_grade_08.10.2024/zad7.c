#include <stdio.h>

struct Student
{

    char name[20];
    int number_in_class;
    float grade;
};

int main(void)
{

    struct Student student1 = {"Harry", 26, 5.87};
    printf("\nName: %s", student1.name);
    printf("\nNumber in class: %d", student1.number_in_class);
    printf("\nGrade: %.2f", student1.grade);
}