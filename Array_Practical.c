#include<stdio.h>

void main()
{
    int i,j,p,c[200];

    int a[20]={0,1,4,6,8,9,10,12,14,15,16,18,20,21,22,24,25,26,27,28};
    int b[10]={2,3,5,7,11,13,17,19,23,29};

    for(i=2;i<=200;i++)
    {
        p=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                p++;
            }
        }
        if(p==0)
        {

            c[i]=b[i%10];
        }

        else
        {
            c[i]=a[i%20];
        }

    }

    for(i=0;i<200;i++)
    {
        if(i==0||i==1)
        {
            c[i]=a[i%20];
        }
        printf("\n%d",c[i]);
    }
}