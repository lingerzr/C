#include <stdio.h>

int main()
{
    int i, n;
    int s = 1;
    int sum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        s = s * i;
        sum = sum + s;
    }
    printf("%d\n", sum);
    return 0;
}