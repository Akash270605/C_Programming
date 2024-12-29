#include<stdio.h>

void pal();


void main()
{
    pal();
}


void pal()
{
    char s[20];
    int i,j,count=0,p=0;

    printf("Enter the String: ");
    scanf("%s",s);

    for(i=0;s[i]!=NULL;i++)
    {
        count++;    //Finding Length of String
    }

    printf("\nLength of the String: %d",count);

    //Checking Conditions for Palindrome
    for(j=0;s[j]!=NULL;j++)
    {
        if(s[j]!=s[(count-1)-j])
            {
                p=p+1;
                break;
            }
    }


if(p==0)
{
    printf("\nPalindrome String\n");
}

else{
    printf("\nNot Palindrome String\n");
}


}


