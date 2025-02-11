#include <stdio.h>
#define ARRAY_SIZE 5

#if defined(_WIN32)
void BubbleSort(int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

#elif defined(__linux__)
void Selection(int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {

        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

#elif defined(_APPLE_)
void InsertionSort(int *array, size)
{
    for (int i = 1; i < size; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
#endif
int main()
{

    int array[] = {10, 5, 7, 2, 3, 8, 15, 1};
    int size = sizeof(array) / sizeof(array[0]);
    BubbleSort(array, size);
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    return 0;
}