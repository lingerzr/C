//二分查找
//在一个有序数组中查找具体的某个数
//如果找到了返回这个数的下标，找不到返回-1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binary_search(int arr[], int k, int sz)
{
    int left = 0;
    int right = sz - 1;

    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(arr[mid] < k)
        {
            left = mid + 1;
        }
        else if(arr[mid] > k)
        {
            right = mid - 1;
        }
        else return mid;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int ret = binary_search(arr, k, sz);
    if(ret == -1)
    {
        printf("can not find!\n");
    }
    else
    {
        printf("answer is %d\n", ret);
    }
    return 0;
}