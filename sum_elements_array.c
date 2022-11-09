#include<stdio.h>
void main()
{
int a[100],limit,i,sum=0;
printf("enter the limit of array:");
scanf("%d",&limit);
printf("enter the elements:\n");
for(i=0;i<limit;i++)
{
scanf("%d",&a[i]);
}
printf("elements are:\n");
for(i=0;i<limit;i++)
{
printf("%d\n",a[i]);
sum=sum+a[i];
}
printf("\nsum=%d\n",sum);
}

