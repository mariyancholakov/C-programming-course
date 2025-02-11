#include <stdio.h>
#define SQUARE(A, B) ((A * A) + (2 * A * B) + (B * B))
int main()
{

    int a = 3, b = 4;
    printf("Square of (%d, %d) is: %d\n", a, b, SQUARE(a, b));

    return 0;
}