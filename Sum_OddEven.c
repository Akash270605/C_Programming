#include<stdio.h>

void main()
{
    int a[5],i,odd=0,even=0;

    printf("\nEnter the Values: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array is: ");
    for(i=0;i<5;i++)
    {
        printf("\t%d",a[i]);
        if(a[i]%2==0)
        {
            even+=a[i];
        }

        else
        {
            odd+=a[i];
        }
    }

    printf("\n\nSum of Even: %d",even);
    printf("\nSum of Odd: %d\n",odd);


}
