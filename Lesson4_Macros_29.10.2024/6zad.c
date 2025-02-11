#include <stdio.h>
#define SWAP(A, B, TYPE) \
    TYPE temp = A;       \
    A = B;               \
    B = temp;
#define SORT(ARRAY, SIZE, TYPE, COMPARE)            \
    for (int i = 0; i < SIZE - 1; i++)              \
    {                                               \
        for (int j = 0; j < SIZE - i - 1; j++)      \
        {                                           \
            if (ARRAY[j] COMPARE ARRAY[j + 1])      \
            {                                       \
                SWAP(ARRAY[j], ARRAY[j + 1], TYPE); \
            }                                       \
        }                                           \
    }

int main()
{
    int array[] = {5, 2, 8, 1, 3};
    SORT(array, 5, int, >)

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    // char array[5] = {'z', 'f', 'b', 'r', 'a'};
    // SORT(array, 5, char, >)

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c\n", array[i]);
    // }

    return 0;
}