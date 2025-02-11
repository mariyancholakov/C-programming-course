#include <stdio.h>
int main()
{

    int a, b, flag = 0;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i < a + b; i++)
    {
        for (int j = 1; j < a; j++)
        {
            if ((a * j) == (b * i))
            {
                printf("NOK: %d", a * j);
                flag = 1;
            }
        }
        if (flag)
        {
            break;
        }
    }

    return 0;
}