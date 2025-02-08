#include <stdio.h>  //standard-input-output函数

int num2 = 20;  //全局变量-定义在代码块{}之外

//main前面的int表示main函数调用返回一个整型值
int main()  //主函数-程序的入口-main函数有且仅有一个
{
    int num1 = 10;  //局部变量-定义在代码块{}之内
    //全局变量和局部变量可以同时存在-建议不要同时存在
    //当全局变量和局部变量同时存在时局部变量优先
    double f = 5.0;
    printf("hello b1t\n");  //打印函数-库函数用#include<stdio.h>的文件
    printf("%lf\n", f);
    printf("%d\n", sizeof(char));  //1字节
    printf("%d\n", sizeof(short));  //2字节
    printf("%d\n", sizeof(int));  //4字节
    printf("%d\n", sizeof(long));  //4/8字节
    printf("%d\n", sizeof(long long));  //8字节
    printf("%d\n", sizeof(float));  //4字节
    printf("%d\n", sizeof(double));  //8字节
    return 0;  //返回 0
}

//char字符类型
//printf("%c\n",ch);  //%c -- 打印字符格式的数据

//%d - 打印整型
//%c - 打印字符
//%f - 打印浮点数字-打小数
//%p - 以地址的形式打印
//%s - 大音字符串