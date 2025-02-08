#include <stdio.h>

int main()
{
    int day = 0;
    scanf("%d", &day);
    switch (day)
    {
    case 1:  //case后面必须是整型
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("mistake");  //和case之间没有顺序可言
    }

    return 0;
}