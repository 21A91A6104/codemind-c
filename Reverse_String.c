#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len;
    scanf("%[^
]",str);
    len=strlen(str);
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}