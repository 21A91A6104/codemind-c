#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        sum+=arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        s+=arr[i];
    }
    printf("%d
",sum);
    printf("%d
",s);
    return 0;
}
       