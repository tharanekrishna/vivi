#include<stdio.h>
int main()
{
int n,sum=0,rem,sq;
printf("enter the number\n");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
sq=rem*rem;
sum=sum+sq;
n=n/10;
}
printf("%d",sum);
return 0;
}
