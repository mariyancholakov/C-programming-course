#include "transformation.h"
#include <string.h>
struct transformation string_to_long(char string[])
{
    struct transformation result;
    result.result = 0;
    result.error[0] = '\0';

    int is_negative = 0;
    int i = 0;

    if (string[0], '-' == 0)
    {
        is_negative = 1;
        i++;
    }

    for (i; string[i] != '\0'; i++)
    {
        if (string[i] < '0' || string[i] > '9')
        {
            strcpy(result.error, "Ivalid input string");
            result.result = 0;
            return result;
        }
        result.result = result.result * 10 + (string[i] - '0');

        if (is_negative)
        {
            result.result *= -1;
        }
    }

    return result;
}