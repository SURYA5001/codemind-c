#include<stdio.h>
int main()
{
    int hra,da,bs;
    float gs;
    scanf("%d",&bs);
    if(bs<=10000)
    {
    da=bs*0.80;
    hra=bs*0.20;
    }
    else if(bs<=20000)
    {
        da=bs*0.90;
        hra=bs*0.25;
    }
    else 
    {
        da=bs*0.95;
        hra=bs*0.3;
    }
       gs=hra+da+bs;
       printf("%.2f",gs);
}