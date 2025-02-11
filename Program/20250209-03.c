#include <stdio.h>

int main()
{
    int ret;
    char password[20] = {0};
    printf("password:");
    scanf("%s", password);
    printf("password(Y/N):");
    //缓冲区还剩余一个'\n'
    //用一个getchar读取一下'\n'
    getchar();
    ret = getchar();
    if(ret == 'Y')
    {
        printf("success\n");
    }
    else
    {
        printf("fail\n");
    }
    return 0;
}

/*只提取0~9之间的数字
#include <stdio.h>

int main()
{
    int ch;
    while ((ch = getchar()) != EOF) 
    {
        if(ch < '0' || ch > '9')
            continue;
        putchar();
    }
    return 0;
}
*/