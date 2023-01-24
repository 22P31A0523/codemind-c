#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,c=0;
    char s[n];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i] ==' ' && s[i+1] !=' ')
        c++;
    }
    printf("%d",c+1);
}