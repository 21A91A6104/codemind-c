#include<stdio.h>
int main()
{
    char s[100];
    int i,max;
    fgets(s,100,stdin);
    max=s[0];
    for(i=0;s[i]!=NULL;i++)
    {
        if(max<s[i])
        {
            max=s[i];
        }
    }
    printf("%c",max);
    return 0;
}