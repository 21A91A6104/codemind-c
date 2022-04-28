#include<stdio.h>
int main()
{
    char s[10000];
    printf("Hello Technicalhub");
    fgets(s,10000,stdin);
    printf("
%s",s);
    return 0;
}