#include <stdio.h>
int main()
{
    int n,i,c=0;
    printf("\nEnter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(pow(2,i)==n)
        {
           c=1; 
        }
    }if(c==1){printf("\n yes");}
    else
    {
    	printf("\n no");
    }
    return 0;
}
