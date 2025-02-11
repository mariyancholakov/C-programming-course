#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystrings.h"

int main(int argc, char **argv)
{

    if (argc != 3)
    {
        printf("Please enter exacly two strings: \n");
    }

    if (strlen(argv[1]) > 50 || strlen(argv[2]) > 50)
    {
        printf("The max lenght of the strings is 50.\n");
        return 1;
    }

    printf("\nThe concatenation of str1(%s) and str2(%s) is: ", argv[1], argv[2]);
    strconcat(argv[1], argv[2]);
    printf("%s", argv[1]);

    return 0;
}