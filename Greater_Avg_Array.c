#include<stdio.h>

void main()
{
    float a[5],b[5],avg1,avg2,sum1=0,sum2=0,c1=0,c2=0;
    int i,j;

    //Code for Array 1
    printf("\nEnter the Values for Array 1: ");
    for(i=0;i<5;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum1+=a[i];
        c1++;
    }

    avg1=sum1/c1;
    printf("\nAverage 1: %f",avg1);

    //Code for Array 2
    printf("\nEnter the Values for Array 2: ");
    for(j=0;j<5;j++)
    {
        scanf("%f",&b[j]);
    }
    for(j=0;j<5;j++)
    {
       sum2+=b[j];
       c2++;
    }

    avg2=sum2/c2;
    printf("\nAverage 2: %f",avg2);

    //Comparison of Averages
    if(avg1>avg2)
    {
        printf("\n\nGreater Average: %f-> A\n",avg1);
    }
    else
    {
        printf("\n\nGreater Average: %f-> B\n",avg2);
    }

}
