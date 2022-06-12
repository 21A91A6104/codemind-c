#include<stdio.h>
int main()
{
    int i,x=0,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0&&arr[i]!=1)
        {
            x=1;
            break;
        }
    }
    if(x!=0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    return 0;
}