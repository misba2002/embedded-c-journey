#include <stdio.h>

int main()
{
    printf("Hello\n");

    goto end;

    printf("This will never be printed.\n");

end:
    printf("World\n");

    return 0;
}