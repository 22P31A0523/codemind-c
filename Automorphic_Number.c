#include<stdio.h>
#include<math.h>
int main()
{
    int a,s,d,e,r;
    scanf("%d",&a);
    s=a*a;
    d=log10(a)+1;
    e=pow(10,d);
      r=s%e;
    if(r==a)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}