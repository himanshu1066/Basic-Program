#include<stdio.h>
#include<conio.h>
main()
{
int s=0,x,r;
printf("enter a number");
scanf("%d",&x);
while(x!=0)
{
r=x%10;
s=s+r;
x=x/10;


}

printf("Sum of  Digit=%d",s);

}
