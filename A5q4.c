#include<stdio.h>
int main()
{
int n,t=0;
printf("enter the number of odd number to be printed ");
scanf("%d",&n);
for (int i=1;i>0;i++)
{
if(i%2!=0)
{
printf("%d ",i);
t++;
}
if(t==n)
break;
}
return 0;
}
