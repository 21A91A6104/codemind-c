#include<stdio.h>
#include<math.h>
int main()

{
    long int a,b,c[20],rem=0,i=0,n,first=0,last=0;
    scanf("%ld%ld",&a,&b);
    
    while(a!=0)
    {
        rem=a%10;
        c[i]=rem;
        i++;
        a/=10;
    }
    n=i;
    
    for(int i=0;i<b;i++)
    {
        last+=c[i]*pow(10,i);
    }
    
    int k;
    k=b-1;
    for(int i=0;i<b;i++)
    {
        first+=c[n-i-1]*pow(10,k);
        k--;
    }
    printf("%ld",abs(first-last));
}