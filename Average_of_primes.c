#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0,temp,j,i,m=0,sum=0;
    scanf("%d",&n);
    float avg;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            continue;
        }
        else
        {
            count=0;
            temp=arr[i];
            for(j=2;j<temp;j++)
            {
                if(temp%j==0)
                {
                    count++;
                }
            }
            if(count==0)
            {
                sum=sum+temp;
                m=m+1;
            }
        }
    }
    avg=(float)sum/m;
    printf("%.2f",avg);
    return 0;
}