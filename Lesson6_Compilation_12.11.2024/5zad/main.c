#include <stdio.h>
#include "maths.h"
int main()
{

    int number;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    int result = find_factorial(number);
    printf("Factorial of %d is: %d\n", number, result);
}