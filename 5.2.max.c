#include<stdio.h>
int main()
{
	int large,i,a[10];
	printf("enter ten values");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
                large=a[0];
                for(i=0;i<10;i++)
                {
                	if(a[i]>large)
                	{
                		large=a[i];
                	}
                }
                printf("largest number is %d",large);
                return 0;
}
