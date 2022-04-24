#include<stdio.h>
int main()
{
    int n,i,ele,sum=0,count=0,avg;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]==avg)
        count++;
    }
    if(count>0)
    printf("True");
    else
    printf("False");
    return 0;
}