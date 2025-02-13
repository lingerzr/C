//编写代码实现,模拟用户登录情景,并且只能登录三次。
//(只允许输入三次密码,如果密码正确则提示登录成功,如果三次均输入错误,则退出程序)
#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    char password[20] = {0};
    for(i = 0; i < 3; i++)
    {
        printf("password :");
        scanf("%s", password);
        if(strcmp(password, "123456") == 0)
        {
            printf("success\n");
            break;
        }
        else
        {
            printf("fail\n");
        }
    }
    if(i == 3)
        printf("quit");
    return 0;
}