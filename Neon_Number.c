#include<stdio.h>
int main()
{
    int n,d,sq,s=0;
    scanf("%d",&n);
    sq=n*n;
    int temp=n;
    while(sq!=0)
    {
        d=sq%10;
        s=s+d;
        sq=sq/10;
    }
    if(s==temp)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
 
}