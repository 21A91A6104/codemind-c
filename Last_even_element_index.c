#include<stdio.h>
int main()
{
    int n,i,odd;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            odd=i;
        }
    }   
    printf("%d",odd);
    return 0;
}