#include<stdio.h>
int main()
{ int n;
printf("enter the number of which table to be printed ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
printf("%d ",n*i);
return 0;
}
