//演示多个字符从两端移动，向中间汇聚
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>  //system("cls")

int main()
{
    char arr1[] = "welcome to bit!!!!!!";
    char arr2[] = "####################";
    //[a b c \0]
    // 0 1 2 3
    int left = 0;
    int right = strlen(arr1) - 1;

    // while(left <= right)
    // {
    //     arr2[left] = arr1[left];
    //     arr2[right] = arr1[right];
    //     printf("%s\n", arr2);
    //     Sleep(1000);  // 休息一秒
    //     system("cls");  //执行系统命令的一个函数 - cls - 清空屏幕
    //     left++;
    //     right--;
    // }
    for(;left <= right; left++, right--)
    {
        arr2[left] = arr1[left];
         arr2[right] = arr1[right];
         printf("%s\n", arr2);
         Sleep(1000);  // 休息一秒
         system("cls");  //执行系统命令的一个函数 - cls - 清空屏幕
    }
    printf("%s\n", arr2);
    return 0;
}