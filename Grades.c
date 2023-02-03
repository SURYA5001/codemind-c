#include<stdio.h>
int main()
{
    int p,c,b,m,cs;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
     float tp;
tp=(p+c+b+m+cs)/5;
    if(tp>=90)
    {
        printf("Grade A");
    }
    else if(tp>=80)
    {
        printf("Grade B");
    }
    else if(tp>=70)
    {
      printf("Grade C");
    }
    else if(tp>=60)
    {
        printf("Grade D");
    }
    else if(tp>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}