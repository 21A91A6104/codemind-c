#include<stdio.h>
int main()
{
    char s[100];
    int x=0,y=0,i;
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='z')
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    if(y==2*x)
    printf("Yes");
    else
    printf("No");
    return 0;
}