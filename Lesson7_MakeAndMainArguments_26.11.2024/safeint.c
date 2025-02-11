#include "safeint.h"
#include <stdio.h>
#include <limits.h>
struct SafeResult safeadd(int first_num, int second_num)
{
    struct SafeResult result;
    if ((second_num > 0 && first_num > INT_MAX - second_num) || (second_num < 0 && first_num < INT_MAX - second_num))
    {
        result.errorflag = 1;
        result.value = 0;
        return result;
    }
    else
    {
        result.value = first_num + second_num;
        result.errorflag = 0;
    }
    return result;
}
struct SafeResult safesubtract(int first_num, int second_num)
{
    struct SafeResult result;
    if ((second_num < 0 && first_num > INT_MAX + second_num) || (second_num > 0 && first_num < INT_MAX + second_num))
    {
        result.value = 0;
        result.errorflag = 1;
        return result;
    }
    else
    {
        result.value = first_num - second_num;
        result.errorflag = 0;
    }
    return result;
}
struct SafeResult safemultiply(int first_num, int second_num)
{
    struct SafeResult result;
    if (first_num > 0 && second_num > 0 && first_num > INT_MAX / second_num)
    {
        result.value = 0;
        result.errorflag = 1;
        return result;
    }
    else if (first_num < 0 && second_num < 0 && first_num < INT_MAX / second_num)
    {
        result.value = 0;
        result.errorflag = 1;
        return result;
    }
    else if ((first_num > 0 && second_num < 0 && second_num < INT_MIN / first_num) || (first_num < 0 && second_num > 0 && first_num < INT_MIN / second_num))
    {
        result.value = 0;
        result.errorflag = 1;
        return result;
    }
    else
    {
        result.value = first_num * second_num;
        result.errorflag = 0;
    }
    return result;
}
struct SafeResult safedivide(int first_num, int second_num)
{
    struct SafeResult result;
    if (second_num == 0)
    {
        result.value = 0;
        result.errorflag = 1;
        return result;
    }
    else if (first_num == INT_MIN && second_num == -1)
    {
        result.value = 0;
        result.errorflag = 1;
        return result;
    }
    else
    {
        result.value = first_num / second_num;
        result.errorflag = 0;
    }
    return result;
}
struct SafeResult safestrtoint(char string[])
{
    struct SafeResult result;
    result.value = 0;
    int is_negative = 0;
    int i = 0;
    if (string[0] == '-')
    {
        is_negative = 1;
        i = 1;
    }
    for (i; string[i] != '\0'; i++)
    {
        result.errorflag = 1;
        if (string[i] >= '0' && string[i] <= '9')
        {
            result.errorflag = 0;
            result.value = result.value * 10 + (string[i] - '0');
        }
        else
        {
            result.value = 0;
            result.errorflag = 1;
            return result;
        }
    }
    if (is_negative == 1)
    {
        result.value *= -1;
    }
    return result;
}