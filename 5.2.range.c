#include<stdio.h>
int main()
{
	int n,max=20,min=1;
	printf("enter the number\n");
	scanf("%d",&n);
	if((n-min)*(n-max)<=0)
	{
		printf("yes");
	}else
	printf("no");
	return 0;
}
