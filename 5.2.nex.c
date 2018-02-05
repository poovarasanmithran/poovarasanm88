#include<stdio.h>
int main()
{
int a;
printf("enter the  value");
scanf("%d",&a);
if(a<=0)
{
a=a++;
}
printf("the value is",a);
return 0;
}
