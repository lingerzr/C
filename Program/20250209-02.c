#include <stdio.h>

int main()
{
    int ch = 0;
    while((ch = getchar()) != EOF)
    {
        putchar(ch);
    }

    // int ch = getchar();
    // putchar(ch);
    // printf("%c\n", ch);

    return 0;
}