void main()
{
int x,r,s=0;
printf("enter a number");
scanf("%d",&x);
while(x!=0)
{
r=x%10;
s=s+r;
x=x/10;



}
printf("sum of digit = %d",s);



}
