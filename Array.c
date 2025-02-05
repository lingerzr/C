#include<stdio.h>
#define MAXN 20
int main(void)
{
    int i,flag,n,x;
    int a[MAXN];
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    flag=0;
    for(i=0;i<n;i++){
        if(a[i]==x){
            printf("%d",i);
            flag=1;
        }
    }
    if(flag==0){
        printf("Not Found");
    }
    return 0;
}