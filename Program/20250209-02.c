#include <stdio.h>

int main()
{
    int ch = 0;  //不需要初始赋值
    while((ch = getchar()) != EOF)  //end of file
    {
        putchar(ch);
    }

    // int ch = getchar();
    // putchar(ch);
    // printf("%c\n", ch);

    return 0;
}