#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,sum=0,count=0;
    int avg;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
       if(count==0&&arr[i]%2!=0)
       {
           sum++;
       }
    }
    printf("%d",sum);
    return 0;
}