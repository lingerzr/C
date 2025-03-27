#include <stdio.h>
#include <string.h>

int get_max(int x, int y)
{
    if(x > y)
        return x;
    if(x <= y)
        return y;
}

/*void Swap1(int x, int y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}*/
//无法使主函数中的变量值发生改变
//自定义函数中的变量与主函数中的变量具有不一样的内存空间
//用下面的指针方法来改变主函数中变量的值
void Swap2(int* pa, int* pb)
{
    int tmp = 0;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main()
{
    int a = 10;
    int b = 20;
    int max = get_max(a, b);
    printf("max = %d\n", max);
    //库函数的使用
    char arr1[] = "bit";
    char arr2[20] = "##########";
    char arr3[] = "hello world";
    strcpy(arr2, arr1);
    memset(arr3, '*', 5);
    printf("%s\n",arr2);
    printf("%c\n", arr2[10]);
    printf("%s\n", arr3);

    Swap2(&a, &b);  //形式参数(输入地址)
    
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
