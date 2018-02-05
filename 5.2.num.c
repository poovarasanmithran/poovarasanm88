#include<stdio.h>
int main()
{
int num,count=0;
printf("\n enter the number");
scanf("%d",&num);
while(num!=0)
{
num=num/10;
count++;
}
printf("\n no of digits ");
scanf("%d",&count):
return 0;
}
