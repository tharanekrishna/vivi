#include<stdio.h>
int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
while(n>0)
{
n=n/2;
printf("%d",n);
}
return 0;
}
