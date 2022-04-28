
#include<stdio.h>
int main()
{
    char s[100];
    int i;
    int sum=0;
    int x;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if((s[i]>='0')&&(s[i]<='9'))
        sum=sum+(s[i]-'0');
    }
    printf("%d",sum);
    return 0;
}