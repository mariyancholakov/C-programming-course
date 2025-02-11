#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE##_##NAME##_##command
#define DEFINE_COMMAND(NAME, TYPE) \
    void COMMAND(NAME, TYPE)(void) \
    {                              \
        printf("Hello World!\n");  \
    }

DEFINE_COMMAND(quit, external);
DEFINE_COMMAND(quit_second, external_second);
int main()
{
    external_quit_command();
    external_second_quit_second_command();

    return 0;
}