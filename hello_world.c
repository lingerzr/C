#include <stdio.h>  //standard-input-output函数

//main前面的int表示main函数调用返回一个整型值
int main()  //主函数-程序的入口-main函数有且仅有一个
{
    double f = 5.0;
    printf("hello b1t\n");  //打印函数-库函数用#include<stdio.h>的文件
    printf("%lf\n", f);
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    return 0;  //返回 0
}

//char字符类型
//printf("%c\n",ch);  //%c -- 打印字符格式的数据

//%d - 打印整型
//%c - 打印字符
//%f - 打印浮点数字-打小数
//%p - 以地址的形式打印