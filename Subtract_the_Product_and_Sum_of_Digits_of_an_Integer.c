#include<stdio.h>
int main()
{
    int n,q,r,d=1,s=0,h;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        d=d*r;
        s=s+r;
        h=d-s;
    }
    printf("%d",h);
}