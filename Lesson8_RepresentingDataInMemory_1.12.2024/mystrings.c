#include <stdio.h>
#include "mystrings.h"
#include <stdlib.h>
#include <string.h>
int strlength(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void strconcat(char str1[100], char str2[])
{
    int i = 0;
    while (str1[i] != '\0')
    {
        i++;
    }

    int j = 0;
    for (int j = 0; str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }
    str1[i] = '\0';
}

int strcompare(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] < str2[i])
        {
            return -1;
        }
        else if (str1[i] > str2[i])
        {
            return 1;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] != '\0')
    {
        return -1;
    }
    if (str1[i] != '\0' && str2[i] == '\0')
    {
        return -1;
    }
    return 0;
}