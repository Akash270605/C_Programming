#include<stdio.h>
#include<math.h>

void main()
{
    int i,sum=0,a[20],n;

    printf("\nLength of Array: ");
    scanf("%d",&n);

    printf("\nEnter the Array Values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nArray: ");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }


    //Code for Mean
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("\nSum is: %d",sum);

   int mean=sum/n;
    printf("\nMean is: %d",mean);

    //Mean Difference
    int d,s_d=0,p;

    for(i=0;i<n;i++)
    {
        d=a[i]-mean;
        p=pow(d,2);
        s_d=s_d+p;
    }
    printf("\n\nSum Difference: %d",s_d);

    //Code for Mean Deviation
    float devi=sqrt(s_d/n);
    printf("\n\nMean Deviation is: %f",devi);

}
