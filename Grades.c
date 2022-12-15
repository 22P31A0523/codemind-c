#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int s=(a+b+c+d+e)/5;
    if(s>=90)
    {
        printf("Grade A");
    }
    else if(s>=80)
    {
        printf("Grade B");
    }
    else if(s>=70)
    {
        printf("Grade C");
    }
    else if(s>=60)
    {
        printf("Grade D");
    }
    else if(s>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}