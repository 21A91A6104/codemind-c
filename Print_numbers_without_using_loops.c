#include<stdio.h>
void print(int);
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1&&n<=10000)
    {
        print(n);
    }
    else
    {
        printf("The Number Series is Not Possible Print");
    }
    return 0;
}
void print(int n)
{
    static int c=1;
    if(c==n+1)
    {
        return;
    }
    printf("%d ",c);
    c++;
    print(n);
}