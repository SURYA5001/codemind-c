#include<stdio.h>
int main()
{
    int x,y,z,t,ch;
    scanf("%d%d%d",&x,&y,&z);
    t=(x*5)+(y*10);
    ch=t/z;
    printf("%d",ch);
    return 0;
}