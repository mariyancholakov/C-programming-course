#ifndef SCHOOLROOM_H_
#define SCHOOLROOM_H_
#include "person.h"

struct SchoolRoom
{
    struct Person Students_In_Room[50];
    int class_num;
    struct Person HeadTeacher;
};
#endif
