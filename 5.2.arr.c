#include <stdio.h>
int main(void)
{
int w[100],p,q,s,max,min,t;
printf("\n enter the number of elements");
scanf("%d",&s);
printf("\n enter the array");
for(p=0;p<=s;p++)
{
	scanf("%d",&w[p]);
}
for(p=0;p<=s;p++)
{
	for(q=p+1;q<=s;q++)
	{
	if(w[p]<w[q])
	{
t=w[p];
		w[p]=w[q];
w[q]=w[p];
	}
}
}
for(p=0;p<=s;p++)
{
	max=w[0];
	min=w[s-1];
}
printf("\nthe maximum value is %d",max);
printf("\n minimum value is %d",min);
	return 0;
}
