//输出从2到n的素数 利用函数模块is_prime

#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    int i;
    int flag = 0;
    for(i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) flag = 1;
    }
    if(flag == 1) return 0;
    else return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    for(i = 2; i <= n; i++)
    {
        if(is_prime(i) == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

