#include<stdio.h>
int main()
{
    int a,r,s,n=0;
    scanf("%d",&a);
    s=a*a;
    while(s!=0)
    {
        r=s%10;
        n=n+r;
        s=s/10;
    }
    if(n==a)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}