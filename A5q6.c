#include<stdio.h>
int main()
{ int n,t;
printf("enter the times the even number to be printed ");
scanf("%d",&n);
for (int i=0;i>=0;i++)
{
if (i%2==0)
{
printf ("%d ",i);
t++;
}
if(t==n)
break;
}
return 0;
}
