#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);
    x=b+(c*2);
    if(a<=x)
    printf("Qualify");
    else
    printf("Not Qualify");
}