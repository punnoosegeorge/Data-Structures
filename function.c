#include<stdio.h>
void sum();
void main()
{
sum();
}
void sum()
{
int a,b,sum=0;
printf("enter the numbers");
scanf("%d%d",&a,&b);
sum=a+b;
printf("%d",sum);
}

