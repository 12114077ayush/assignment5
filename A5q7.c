#include<stdio.h>
int main()
{int x,i;
printf("enter the number of odd numbers to printed ");
scanf("%d",&x);
i=2*x-1;
while(i>=0)
{
    if(i%2==0)
        printf("%d ",i);
i--;
}
return 0;
}
