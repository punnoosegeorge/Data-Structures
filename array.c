#include<stdio.h>
void main()
{
int a[100],limit,i;
printf("enter the limit:");
scanf("%d",&limit);
printf("enter elements:\n");
for(i=0;i<limit;i++)
{
scanf("%d",&a[i]);
}
printf("array elements are:\n");
for(i=0;i<limit;i++)
{
printf("%d\n",a[i]);
}
}
