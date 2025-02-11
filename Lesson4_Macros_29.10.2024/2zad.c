#include <stdio.h>
#define COMPARE_TWO_ELEMENTS(a, b) (a > b) ? #a : #b
int main()
{
    int firstElement = 5;
    int secondElement = 10;

    printf("The bigger element is the %s", COMPARE_TWO_ELEMENTS(firstElement, secondElement));
    return 0;
}