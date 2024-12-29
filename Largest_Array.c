#include<stdio.h>

void main()
{
    int i,n,max,a[10];

    printf("\nLength of Array: ");
    scanf("%d",&n);

printf("\nEnter th Values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nArray is: ");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }

    //Code for Max Value
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    //Code for Index
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            break;
        }
    }

    printf("\n\nMax Value is: %d \nAt index : %d\n",max,i);
}
