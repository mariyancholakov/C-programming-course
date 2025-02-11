#include <stdio.h>
#define DEBUG

int Sort_Array(int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    int sum = 0;
    for (int k = 1; k < size; k++)
    {
        if (k % 3 == 0)
        {
            sum += array[k];
#ifdef DEBUG
            printf("Number at index %d: %d\n", k, array[k]);
#endif
        }
    }

#ifdef DEBUG
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
#endif

    return sum;
}
int main()
{

    int array[] = {5, 3, 4, 1, 20, 14, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int sum;
    sum = Sort_Array(array, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nSum of numbers whose indexes are divisible by 3: %d\n", sum);

    return 0;
}