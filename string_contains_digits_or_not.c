
#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    while(t>0)
    {
        int count=0;
        char s[100];
        scanf("%s",s);
        for(i=0;s[i]!=NULL;i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            count++;
        }
        if(count>0)
        printf("Yes
");
        else
        printf("No
");
        t--;
    }
    return 0;
}