#include<stdio.h>
int main()
{
    int S,T,B,cap;
    scanf("%d%d%d",&S,&T,&B);
    cap=(2*S*T*B*512)/1024;
    printf("%d KB",cap);
}