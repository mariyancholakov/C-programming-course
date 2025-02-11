#include <stdio.h>
#include "schoolclass.h"
#include "schoolroom.h"

struct SchoolRoom
{
    struct Person Students_In_Room[50];
    int class_num;
    struct Person HeadTeacher;
};

struct School
{
    struct SchoolClass All_Classes[20];
    struct SchoolRoom All_Rooms[10];
};
int main()
{
    struct School MySchool;
    return 0;
}