#include <stdio.h>

int main()
{
    int i = 0;
    int k = 0;
    for(i = 0, k = 0; k = 0/*循环0次*/; i++, k++)
        k++;
    return 0;
}