#include<stdio.h>
int main()
{
    char str[100];
    int i,j,x=0,count=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        count=0;
        for(j=0;str[j]!=NULL;j++)
        {
            if(i!=j)
            {
                if(str[i]==str[j])
                {
                    count++;
                }
            }
        }
        if(count==0)
        {
            x=1;
            printf("%c",str[i]);
            break;
        }
    }
    if(x==0)
    {
        printf("-1");
    }
}