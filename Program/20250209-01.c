#include <stdio.h>

int main()
{
    int n = 1;
    int m = 2;
    switch (n)
    {
    case 1: m++;  //n = 1, m = 3
    case 2: n++;  //n = 2, m = 3
    case 3:
        switch (n)  //switch允许嵌套使用
        {
        case 1: n++;  //n = 2, m = 3
        case 2: m++;n++;break;  //n = 3, m = 4
        }
    case 4: m++;  //n = 3, m = 5
        break;
    default:
        break;
    }
    printf("m = %d, n = %d\n", m, n);
    return 0;
}
