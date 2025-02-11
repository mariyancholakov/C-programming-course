#ifndef TRANSFORMATION_H_
#define TRANSFORMATION_H_

struct transformation
{
    long result;
    char error[100];
};

struct transformation string_to_long(char string[]);

#endif