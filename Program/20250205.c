#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[] = "abc";
    //"abc" -- 'a'-97 'A'-65 b'-98 'c'-99 '\0' -- '\0'字符串的结束标志
    char arr2[] = {'a', 'b', 'c', '\0'};
    //或{'a', 'b', 'c', 0}
    char arr3[] = {'a', 'b', 'c'};  //mistake

    int arr[10];  //定义一个存放10个整数数字的数组
    char arr[20];  //定义一个存放20个char型元素的数组

    printf("%s\n", arr1);
    printf("%s\n", arr2);
    printf("%s\n", arr3);

    printf("%d\n", strlen(arr1));  //strlen求字符串长度
    printf("%d\n", strlen(arr2));  //输出值应该为随机值-寻找\0

    return 0;
}

//printf("%d\n", strlen("c:\test\32\test.c"));值为多少? 13
//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//32 --> 26 --> 对应的字符