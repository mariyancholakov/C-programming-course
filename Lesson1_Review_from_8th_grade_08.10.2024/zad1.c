#include <stdio.h>

int main(void)
{

    int arr[] = {1, 7, 10, 15, 16, 13, 23, 30};
    int sum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        int isPrime = 1;
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0 && arr[i] != j)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime && arr[i] != 1)
        {
            sum += arr[i];
        }
    }
    printf("The sum of all the prime numbers is %d", sum);
}