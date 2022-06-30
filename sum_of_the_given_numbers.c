#include<stdio.h>
int main()
{
    int t, m,n,sum;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d%d",&n,&m);
        sum=n+m;
        printf("%d
",sum);
        t--;
    }
    return 0;
}