#include<stdio.h>
int main()
{
    int i,k,n,x=0,y=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            printf("%d ",i);
            x=1;
            break;
        }
    }
    if(x==0)
    printf("-1");
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==k)
        {
            printf("%d ",i);
            y=1;
            break;
        }
    }
    if(y==0)
    printf(" -1");
    
    return 0;
}
    