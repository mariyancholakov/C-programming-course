#include <stdio.h>

int main(void)
{

    int array[] = {1, 2, 5, 7, 8, 10};

    int size = sizeof(array) / sizeof(array[0]);

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

    int searched_num;
    printf("Enter the number you want to search: ");
    scanf("%d", &searched_num);

    int isFound = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == searched_num)
        {
            printf("The number %d is found at index %d", searched_num, i);
            isFound = 1;
            break;
        }
    }
    if (!isFound)
    {
        printf("-1");
    }
}