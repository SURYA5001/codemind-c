#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    int d,c=0;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        c++;
    }
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}