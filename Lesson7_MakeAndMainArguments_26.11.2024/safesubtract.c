#include <stdio.h>
#include "safeint.h"
#include "util.h"
#include <limits.h>
int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("You must provide exacly 2 arguments!\n");
    }
    struct SafeResult first_num = safestrtoint(argv[1]);
    struct SafeResult second_num = safestrtoint(argv[2]);

    if (first_num.errorflag || second_num.errorflag)
    {
        print_invalid_arguments_message();
        return 0;
    }

    if ((first_num.value > INT_MAX || second_num.value > INT_MAX) || (first_num.value < INT_MIN || second_num.value < INT_MIN))
    {
        print_not_in_range_of_int_message();
        return 0;
    }

    struct SafeResult subtractResult;
    subtractResult = safesubtract(first_num.value, second_num.value);

    if (subtractResult.errorflag)
    {
        print_overflow_underflow_message();
        return 0;
    }

    printf("The result is: %d\n", subtractResult.value);
}