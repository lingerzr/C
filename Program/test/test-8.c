//乘法口诀表 
#include <stdio.h>

 int main()
 {
    int i, j, result;
    for(i = 1; i <= 9; i++)
    {
        for(j = 1; j <= i; j++)
        {    
            result = i * j;
            printf("%d*%d=%-2d  ", i, j, result);  //%2d向右对齐 %-2d向左对其
        }
        printf("\n");
    }
    return 0;
 }