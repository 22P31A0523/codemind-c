#include<stdio.h>
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        c=c+1;
    }
    if(c==n)
    printf("True");
    else
    printf("False");
}