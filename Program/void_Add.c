#include <stdio.h>

void Add(int* p)
{
    (*p)++; //++优先级高于*
}

int main()
{
    int num = 0;

    Add(&num);
    printf("num = %d\n", num);
    Add(&num);
    printf("num = %d\n", num);
    Add(&num);
    printf("num = %d\n", num);

    return 0;
}