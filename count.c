#include<stdio.h>
    int main()
{
    char  a[100];
    int Digits,Alphabet,SpecialChar,Spaces;
    int count;
    Digits=Alphabet=SpecialChar=Spaces=0;
    printf("Enter a string: ");
    gets(a);
    for(count=0;a[count]!=NULL;count++)
    {
        if(a[count]>='0' && a[count]<='9')
            Digits++;
        else if((a[count]>='A' && a[count]<='Z')||(a[count]>='a' && a[count]<='z'))
            Alphabet++;
        else if(a[count]==' ')
            Spaces++;
        else
        SpecialChar++;
    }
    printf("Special Characters: %d",SpecialChar);
    return 0;
}
