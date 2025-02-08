#include <stdio.h>

struct Book
{
    char name[20];
    short price;
};

int main()
{
    //利用结构体类型 - 创建一个该类型的结构体变量
    struct Book b1 = {"Linger's Book", 02};
    struct Book* pb = &b1;
    printf("结构体指针的大小 = %d\n", sizeof(pb));
    printf("%s\n", (*pb).name);  //pb -> name
    printf("%d\n", (*pb).price);  //pb -> price
    /*
    利用pb打印出我的书名和价格
        .   结构体变量.成员
        ->  结构体指针 -> 成员
    */

    int a = 10;
    printf("%p\n", &a);  //%p打印地址
    int* p = &a;  //p是一个指针变量
    printf("%p\n", p);
    *p = 20;
    printf("a = %d\n", a);
    printf("%d\n", sizeof(p));  //4

    printf("%d\n", sizeof(char*));  //4 - 指针变量的大小
    printf("%d\n", sizeof(short*));  //4
    printf("%d\n", sizeof(int*));  //4
    printf("%d\n", sizeof(double*));  //4

    return 0;
}