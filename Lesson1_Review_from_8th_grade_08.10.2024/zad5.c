#include <stdio.h>

int main(void)
{

    char name[] = "Ivan";
    // printf("Enter a word: ");
    // fgets(name, 100, stdin);
    char biggest_letter = name[0];
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (biggest_letter < name[i + 1] && name[i + 1] != '\0')
        {
            biggest_letter = name[i + 1];
        }
    }
    printf("The sybmol with biggest ASCII code is: %c", biggest_letter);
}