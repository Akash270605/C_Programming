#include<stdio.h>
#include<string.h>

void rev();

void main()
{
    rev();
}


void rev()
{
    char s[20],c[20];
    int i,l;

    printf("Enter the String: ");
    scanf("%s",s);

    l=strlen(s)-1;

    printf("\nReversed String: ");

    //Reversing the String
    for(i=0;s[i]!=NULL;i++)
    {
        c[i]=s[l-i];
        printf("%c",c[i]);
    }
}
