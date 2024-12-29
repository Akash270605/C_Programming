#include<stdio.h>

void main()
{
    int a[5],i,sum=0,count=0;
    float avg;

    printf("\nEnter Values: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
      if(a[i]>100)
      {
          sum+=a[i];
          count++;
      }
    }

    printf("\nSum: %d \nCount: %d\n",sum,count);
    avg=(float)sum/count;
    printf("\nAverage: %f\n",avg);
}
