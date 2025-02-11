#include <stdio.h>
#include "quadraticroots.h"
int main()
{
    printf("Int: \n");
    int a_int = 1;
    int b_int = 3;
    int c_int = -4;

    struct QuadraticRootsResult result_int = findroots(a_int, b_int, c_int);
    if (result_int.norealroots)
    {
        printf("No real roots.\n");
    }
    else
    {
        printf("Roots: \n");
        printf("x1: %d\nx2: %d\n\n", result_int.x1, result_int.x2);
    }

    printf("Float: \n");
    float a_float = 1;
    float b_float = 3;
    float c_float = -4;

    struct QuadraticRootsResult result_float = findroots(a_float, b_float, c_float);
    if (result_float.norealroots)
    {
        printf("No real roots.\n");
    }
    else
    {
        printf("Roots: \n");
        printf("x1: %f\nx2: %f\n\n", result_float.x1, result_float.x2);
    }

    printf("Double: \n");
    double a_double = 1;
    double b_double = 3;
    double c_double = -4;

    struct QuadraticRootsResult result_double = findroots(a_double, b_double, c_double);
    if (result_double.norealroots)
    {
        printf("No real roots.\n");
    }
    else
    {
        printf("Roots: \n");
        printf("x1: %lf\nx2: %lf\n\n", result_double.x1, result_double.x2);
    }
}