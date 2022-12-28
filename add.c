#include<stdio.h>
int main()
{char ch='w';
int a=2,b=3,c=1,d,x=10;
printf("%d%d\n",d=a+b>c,d=a>b);
printf("%d%d\n",d=a>b,d=a+b>c);
printf("%d",d=a>b);//0
printf("%d",d=a+b>c);//1
return 0;
}
