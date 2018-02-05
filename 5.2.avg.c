#include <stdio.h>
#include<conio.h>?
int main(void)
{
int x[1100],p,q,v,avg,t;
printf("\n enter the number of elements");
scanf("%d",&v);
printf("\n enter the array");
for(p=0;p<=v;p++)
{
	scanf("%d",&x[p]);
}
for(p=0;p<=v;p++)
{
	for(q=p+1;q<=v;q++)
	{
	if(x[p]<x[q])
	{
		t=x[p];
		x[p]=x[q];
		x[q]=x[p];
	}
}
}
for(p=0;p<=v;p++)
{
avg=x[(v-1)/2];
}
printf("\n average value is %d",avg);
return 0;
}
