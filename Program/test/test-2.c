//二分查找
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 8;  //可赋值

    int sz = sizeof(arr) / sizeof(arr[1]);
    int left = 0;
    int right = sz - 1;

    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(arr[mid] > k)
        {
            right = mid - 1;
        }
        else if(arr[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            printf("ans is : %d\n", mid);
            break;
        }
    }
    if(left > right)
    {
        printf(" can not find it\n");
    }
    return 0;
}