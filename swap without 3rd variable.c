#include<stdio.h>
main()
{
int a,b;
printf("enter two number");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d b=%d",a,b);


}
