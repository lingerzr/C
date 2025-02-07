#include <stdio.h>
#include <string.h>

void test()
{
    static int a = 1;  //a是一个静态的局部变量
    a++;
    printf("%d\n", a);  //2 3 4 5 6
}

//static 修饰局部变量
//局部变量的生命周期变长
//static 修饰全局变量
//改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用
//extern 引入全局变量
//static 修饰函数
//改变了函数链接属性(外部链接属性 --> 内部链接属性) - 同全局变量

int main()
{
    int a ;
    int i = 0;
    int arr[10] = {0};
    scanf("%d\n", &a);
    printf("%d\n", a);
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof a);  //对变量a使用sizeof时可以省略"()"
    printf("%d\n", sizeof(arr));
    //printf("%d\n", sizeof int); mistake

    while (i < 5)
    {
        test();
        i++;
    }
    

    return 0;
}

//b = a++;  后置++ - 先使用,后++ 
//b = ++a;  前置++ - 先++,后使用

//只要是整数，内存中存储的都是二进制的补码
//正数 -- 原码、反码、补码 相同
//负数(转变过程如下)
//原码              --->              反码     --->     补码
//直接按照正负        原码的符号位不变             反码 +1
//写出的二进制序列    其他位按位取反得到