#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int n,i;
printf(" enter  value:");
scanf("%d",&n);
printf(" enter the character:");
scanf("%s",a);
for(i=1;i<=n;i++)
{
	printf("\n %s",a);
}
getch();
}
