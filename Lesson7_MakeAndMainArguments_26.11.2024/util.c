#include <stdio.h>
#include "util.h"

void print_overflow_underflow_message()
{
    printf("\nOverlflow or underflow occured!\n");
}

void print_invalid_arguments_message()
{
    printf("\nInvalid arguments! Please provide only integers as arguments\n");
}

void print_not_in_range_of_int_message()
{
    printf("\nThe integers are not in the range of an int!\n");
}