#include<stdio.h>
int main()
{
int a[10],n,k,i;
printf("enter two values\n");
scanf("%d%d",&n,&k);
for(i=0;i<1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
printf("%d",a[i]);
}
else
{
printf("%d",k-1);
}
}
return 0;
}
