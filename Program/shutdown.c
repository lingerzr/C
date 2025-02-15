#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[20] = {0};
    //shutdown -s -t 60
    //system() - 执行系统命令
    system("shutdown -s -t 60");
again:
    printf("Attention : Your computer will shutdown in 60s");
    scanf("%s", input);
    if(strcmp(input, "cancel") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}