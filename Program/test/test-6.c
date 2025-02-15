//辗转相除法求公约数
#include <stdio.h>

int main()
{
    int m, n, r;
    scanf("%d%d", &m, &n);
    while(m%n)
    {
        r = m%n;
        m = n;
        n = r;
    }
    printf("%d\n", n);
    return 0;
}