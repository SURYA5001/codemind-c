#include<stdio.h>
int main()
{
    int n,q,r,rev=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        rev=rev*10+r;
    }
    if(rev==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}