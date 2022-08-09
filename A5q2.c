#include<stdio.h>
int main()
{ int n;
printf("enter the number of times to be printed ");
scanf("%d",&n);
for(int i=1;i>0;i++)
{
printf("%d ",i);
n--;
if(n<=0)
break;
}
return 0;
}
