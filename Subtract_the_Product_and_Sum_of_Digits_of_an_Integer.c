#include<stdio.h>
int main()
{
    int a,b[10],n,i=0,rem,total=0,product=1;
    scanf("%d",&a);
    
    while(a!=0)
    {
        rem = a%10;
        b[i]=rem;
        i++;
        a/=10;
    }
    n=i;
    for(int j=0;j<n;j++)
    {
        product*=b[j];
    }
    for(int j=0;j<n;j++)
    {
        total+=b[j];
    }
    printf("%d",product-total);

}