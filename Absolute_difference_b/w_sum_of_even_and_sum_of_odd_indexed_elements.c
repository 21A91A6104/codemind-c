#include<stdio.h>
int main()
{
    int n,i,sum=0,c,add=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum=sum+arr[i];
        }
        else
        add=add+arr[i];
    }
    c=sum-add;
    printf("%d",c);
    return 0;
}