#include <stdio.h>

int main(void)
{

    int array[] = {1, 7, 3, 4, 9, 2};
    int size = sizeof(array) / sizeof(array[0]);
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int k = 0; k < size; k++)
    {
        sum += array[k] * k;
    }

    printf("The result is: %d\n", sum);
}