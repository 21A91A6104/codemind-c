#include<stdio.h>
int main()
{
    int n,i,count=0,t;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]==t)
        count++;
    }   
    printf("%d",count);
    return 0;
}