#include <stdio.h>
#include <string.h>

int main()
{
    int a ;
    int arr[10] = {0};
    scanf("%d\n", &a);
    printf("%d\n", a);
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof a);  //对变量a使用sizeof时可以省略"()"
    printf("%d\n", sizeof(arr));
    //printf("%d\n", sizeof int); mistake
    return 0;
}