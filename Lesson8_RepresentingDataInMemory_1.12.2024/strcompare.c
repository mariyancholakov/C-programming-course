#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystrings.h"

int main(int argc, char **argv)
{

    if (argc != 3)
    {
        printf("Please enter exacly strings: \n");
    }

    int result = strcmp(argv[1], argv[2]);
    if (result == 0)
    {
        printf("\nThe two strings(%s and %s) are equal.\n", argv[1], argv[2]);
    }
    else if (result == -1)
    {
        printf("\nThe first string(%s) is smaller than the second string(%s)", argv[1], argv[2]);
    }
    else
    {
        printf("\nThe first string(%s) is larger than the second string(%s)", argv[1], argv[2]);
    }

    return 0;
}