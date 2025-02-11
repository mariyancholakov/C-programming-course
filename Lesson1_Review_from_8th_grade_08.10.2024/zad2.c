#include <stdio.h>

int main(void)
{

    int number = 417;
    int digits = 0;
    int result = 1;
    int copyNumber = number;

    while (copyNumber > 0)
    {
        digits++;
        copyNumber /= 10;
    };

    for (int i = 0; i < digits; i++)
    {
        int lastDigit = number % 10;
        result = result * lastDigit;
        number /= 10;
    }
    printf("The multiply of the digits is %d", result);
}