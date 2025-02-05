#include <stdio.h>

#define MAX 10

//枚举关键字 - enum
enum Sex
{
    MALE,  //0
    FEMALE,  //1
    SECRET  //2
};
//MALE,FEMALE,SECRET枚举常量

int main()
{
    const int n = 4;  //const修饰的常变量-本质上仍然是一个变量
    //计算2个数的和

    int arr[MAX] = {0};  //#define定义的标识符常量

    enum Sex s = FEMALE;

    int num1 = 0;
    int num2 = 0;
    int sum = 0;  //变量的定义要在程序的开头
    //输入数据-使用输入函数scanf
    scanf("%d%d", &num1, &num2);  //取地址符号&
    sum = num1 + num2;
    printf("sum = %d", sum);
    return 0;
}