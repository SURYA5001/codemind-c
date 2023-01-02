#include<stdio.h>
int main()
{
    int n,first=0,second=1,next=0;
    scanf("%d",&n);
    while(n>next)
    {
        next=first+second;
        first=second;
        second=next;
    }
    if(n-first<second-n)
    {
        printf("%d",first);
    }
    else if(n-first==second-n)
    {
        printf("%d %d",first,second);
    }
    else
    {
        printf("%d",second);
    }
}