#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,i,z;
    scanf("%d %d %d",&x,&y,&m);
    i=pow(x,y);
    z=i%m;
    printf("%d",z);
    return 0;
}