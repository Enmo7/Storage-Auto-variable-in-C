#include <stdio.h>
#include <stdlib.h>

int main()
{

    function();
    return 0;
}

void function()
{
    int x = 150; // local variable (also automatic)
    auto int y = 290; // automatic variable
    printf("Local Variable: %d\n", x);
    printf("Auto Variable: %d", y);
}
