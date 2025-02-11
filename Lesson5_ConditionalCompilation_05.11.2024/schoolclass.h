#ifndef SCHOOLCLASS_H_
#define SCHOOLCLASS_H_
#include "person.h"

struct SchoolClass
{
    struct Person Class[26];
    char paralelka;
    int class_num;
    struct Person HeadTeacher;
};
#endif
