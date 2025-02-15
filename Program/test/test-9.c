#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void mune()
{
    printf("**************************\n");
    printf("***  1. Play  0. Exit  ***\n");
    printf("**************************\n");
}

void game()
{
    int ret;
    int guess, count = 0;
    ret = rand() % 100 + 1;  //生成1 - 100之间的随机数
    //printf("%d\n", ret);
    while(1)
    {
        printf("guess : ");
        scanf("%d", &guess);
        if(guess > ret)
        {
            printf("big\n");
            count++;
        }
        else if(guess < ret)
        {
            printf("small\n");
            count++;
        }
        else
        {
            printf("Bingo\n");
            break;
        }
        if(count == 3)
        {
            printf("loser");
            break;
        }
    }
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    //拿时间戳来设置随机数的起始点
    do
    {
        mune();
        printf("Choose : ");
        scanf("%d", &input);
        switch(input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("quit\n");
        default:
            printf("false\n");
            break;
        }
    } while (input);
    
    return 0;
}