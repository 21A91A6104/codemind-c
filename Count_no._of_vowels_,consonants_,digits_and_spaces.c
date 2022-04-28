#include<stdio.h>
int main()
{
    char s[100];
    int i,v=0,c=0,d=0,w=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            v=v+1;
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
            d=d+1;
        }
        else if(s[i]==' ')
        {
            w=w+1;
        }
        else
        {
            c=c+1;
        }
       
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d
",w);
    return 0;
}