#include<stdio.h>
int main()
{
    int principleamount,time,rate,SI;
    scanf("%d",&principleamount);
    scanf("%d",&time);
    scanf("%d",&rate);
    SI=(principleamount*time*rate)/100;
    printf("%d",SI);
    return 0;
}