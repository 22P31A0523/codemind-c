#include<stdio.h>
int main()
{
    int a,b,i,d,e;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<=b-1;i++)
    {
        d=i*i;
        e=i*i*i;
        printf("%d %d %d
",i,d,e);
}}