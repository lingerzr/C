//素数
#include <stdio.h>
#include <math.h>

// int main()
// {
//     int i = 0;
//     int n;
//     int count = 0;
//     scanf("%d", &n);
//     for(i = 3; i <= n; i++)
//     {
//          int j = 0;
//          for(j = 2; j < i; j++)
//          {
//             if(i % j == 0)
//             {
//                 break;
//             }
//          }
//          if(j == i)
//          {
//             printf("%d ", i);
//             count++;
//          }
//     }
//     printf("\n%d", count);  //统计素数的个数
//     return 0;
// }


//优化的方法缩小i遍历的范围
int main()
{
    int i = 0;
    int n;
    int count = 0;
    scanf("%d", &n);
    for(i = 3; i <= n; i+=2)
    {
         int j = 0;
         for(j = 2; j < sqrt(i); j++)
         {
            if(i % j == 0)
            {
                break;
            }
         }
         if(j > sqrt(i))
         {
            printf("%d ", i);
            count++;
         }
    }
    printf("\n%d", count);  //统计素数的个数
    return 0;
}