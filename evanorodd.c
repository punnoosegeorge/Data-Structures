#include<stdio.h>
void main()
{
int a;
printf("enter a number:");
scanf("%d",&a);
if(a%2==0)
printf("even");
else if(a%2==1)
printf("odd number:");
else
printf("0");
}
