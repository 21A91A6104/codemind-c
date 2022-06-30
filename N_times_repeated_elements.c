#include<stdio.h>
int main()
{
    int n,count=0,i,j,x,y=0;
    float avg;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        count=1;
        if(a[i]==0)
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j]=0;
            }
        }
        if(count==x)
        {
            y=1;
            printf("%d ",a[i]);
        }
    }
    if(y==0)
    {
        printf("-1");
    }
}