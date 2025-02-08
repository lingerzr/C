#include <stdio.h>

int main()
{
    int a = 0;
    int b = 2;
    if(a == 1)
        if(b == 2)
            printf("hehe\n");
    else  //悬空else
        printf("haha\n");
    //else和它距离最近的未被分配的if匹配(就近原则)
    return 0;
}