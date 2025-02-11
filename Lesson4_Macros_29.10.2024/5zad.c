#include <stdio.h>

#define SWAP(A, B, TYPE) \
    TYPE temp = A;       \
    A = B;               \
    B = temp;

int main()
{

    // char a = 'a';
    // char b = 'b';
    // SWAP(a, b, char);
    // printf("a = %c, b = %c\n", a, b);

    // int c = 5;
    // int d = 10;
    // SWAP(c, d, int);
    // printf("c = %d, d = %d\n", c, d);

    float e = 5.90;
    float f = 10.14;
    SWAP(e, f, float);
    printf("e = %.2f, f = %.2f\n", e, f);

    return 0;
}