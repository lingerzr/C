#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;

    for(; i < 10; i++)
    {
        for(/*j = 0*/; j < 10; j++)
        {
            printf("hehe\n");
        }
    }
    return 0;
}