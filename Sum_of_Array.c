#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i,s=0;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
    s=s+a[i];
    }
        printf("%d",s);
}