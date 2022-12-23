#include<stdio.h>
int main()
{
    int n,r,d=1,q,s=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s+r;
        d=d*r;
    }
    if(s==d)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}