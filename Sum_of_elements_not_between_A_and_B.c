#include<stdio.h>
int main()
{
    int n,i,c,b,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d %d",&c,&b);
    for(i=0;i<n;i++)
    {
        if(a[i]>=c && a[i]<=b) continue;
        else sum+=a[i];
    }
    printf("%d",sum);
}