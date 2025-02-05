#include <stdio.h>

int main()
{
    //计算2个数的和
    int num1 = 0;
    int num2 = 0;
    int sum = 0;  //变量的定义要在程序的开头
    //输入数据-使用输入函数scanf
    scanf("%d%d", &num1, &num2);  //取地址符号&
    sum = num1 + num2;
    printf("%d", sum);
    return 0;
}