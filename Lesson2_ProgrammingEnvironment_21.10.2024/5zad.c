#include <stdio.h>

int removeDuplicates(int *nums, int numsSize);

int main(void)
{
    int nums[10] = {0, 0, 0, 1, 1, 2, 2, 5, 5, 7};
    int size = removeDuplicates(nums, 10);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}

int removeDuplicates(int *nums, int numsSize)
{
    int k = 1;
    int curel = nums[0];

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] != curel)
        {
            nums[k] = nums[i];
            curel = nums[i];
            k++;
        }
    }
    return k;
}