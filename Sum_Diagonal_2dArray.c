#include<stdio.h>

void main()
{
    int a[3][3],i,j,sum=0;

    printf("\nEnter the Values: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nArray is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",a[i][j]);

            if(i==j)
            {
                sum+=a[i][j];
            }
        }
        printf("\n");
    }

    printf("\nSum is: %d\n",sum);
}
