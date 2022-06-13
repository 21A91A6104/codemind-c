#include<stdio.h>
int main()
{
    char str[100];
    int i,j,x=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        for(j=0;str[j]!=NULL;j++)
        {
            if(i!=j)
            {
                if(str[i]==str[j])
                {
                    x=1;
                    break;
                }
            }
        }
    }
    if(x==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}