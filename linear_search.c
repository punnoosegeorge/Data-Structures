#include<stdio.h>
void main()
{
int i,a[50],limit,key,flag=0;
printf("enter the limit:");
scanf("%d",&limit);
printf("enter elements\n");
for(i=0;i<limit;i++)
{
scanf("%d",&a[i]);
}
printf("elements are:\n");
for(i=0;i<limit;i++)
{
printf("%d\n",a[i]);
}
printf("enter search element:");
scanf("%d",&key);
for(i=0;i<limit;i++)
{
if(key==a[i])
{
flag=1;
break;
}
}
if(flag==1){
printf("\n%d is found at location %d\n",key,i);}
else{
printf("\nnot found\n");
}
}
