#include<stdio.h>
int main()
{
    int a,b,i,d,s=0,j,e,f,g=0;
    scanf("%d",&a);
    b=a*a;
    for(i=a;i>0;)
    {
        d=i%10;
        s=s*10+d;
        i=i/10;
    }
    e=s*s;
    for(j=e;j>0;)
    {
        f=j%10;
        g=g*10+f;
        j=j/10;
    }
    if(g==b)
    printf("True");
    else
    printf("False");
}