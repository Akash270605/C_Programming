#include<stdio.h>

void main()
{
    int a[3][3],i,j,sum=0,c=0;
    float avg;

    printf("Enter the Values: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nArray: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",a[i][j]);
            sum+=a[i][j];
            c++;

        }
        printf("\n");
    }

    printf("\nSum is: %d",sum);
    avg=(float)sum/c;
    printf("\n\n%f\n",avg);
}
