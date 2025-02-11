#include <stdio.h>
#include "transformation.h"

int main()
{
    char first_string[] = "123";
    char second_string[] = "12ab23";

    struct transformation first_result = string_to_long(first_string);
    printf("\n%s -> %d, error: %s", first_string, first_result.result, first_result.error);

    struct transformation second_result = string_to_long(second_string);
    printf("\n\n%s -> %d, error: %s", second_string, second_result.result, second_result.error);

    return 0;
}