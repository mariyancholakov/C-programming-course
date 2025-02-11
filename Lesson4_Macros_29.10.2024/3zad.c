#include <stdio.h>
#define DEBUG(A) printf("Name: %s\nValue %d\nFilename %s\nLine %d\nDate %s\n", #A, A, __FILE__, __LINE__, __DATE__)
int main()
{
    int firstElement = 5;

    DEBUG(firstElement);
    return 0;
}