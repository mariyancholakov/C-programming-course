#include <stdio.h>

void decimal_to_binary(int decimal)
{
    long binary_num[100];
    int i = 0;

    while (decimal > 0)
    {
        binary_num[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%ld", binary_num[j]);
    }
}

int main(void)
{

    int decimal_num;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    decimal_to_binary(decimal_num);
}