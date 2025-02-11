#include <stdio.h>
#include <math.h>

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    long arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = pow(arr[i], 4);
    }

    printf("Array with elements raised to the fourth power: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
