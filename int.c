#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,i,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("median is %d",sum);
getch()
}
