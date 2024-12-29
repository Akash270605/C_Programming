#include<stdio.h>

void main()
{
    int i,n,j,a[10];
    int sum=0,avg;

    printf("\nEnter the Length of Array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nArray: ");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }



    //Code for Average
    for(j=0;j<n;j++)
    {
        sum=sum+a[j];
    }
    printf("\nSum: %d",sum);

    avg=sum/n;
    printf("\n\nAverage is: %d\n",avg);
}
