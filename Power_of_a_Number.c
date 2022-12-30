#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m;
    scanf("%d%d%d",&x,&y,&m);
    int s,h;
    s=pow(x,y);
    h=s%m;
    printf("%d",h);
}