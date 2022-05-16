#include<stdio.h>
int main()
{
    char s[100];
    int i,a,b;
    fgets(s,100,stdin);
    scanf("%d %d",&a,&b);
    for(i=0;s[i]!=NULL;i++)
    {
        if(i>=a&&i<=b)
        {
            printf("%c",s[i]);
        }
    }
}