#include<stdio.h>
#include<math.h>

void armstrong();

void main()
{
    armstrong();
}


void armstrong()
{
    int i,n,m,temp,p=0,b,x=1,sum=0,a;


    printf("Enter the No.: ");
    scanf("%d",&n);

    temp=n;
    m=temp;

    //No. of Digits in Number Given
    while(n>0)
    {
        n%10;
        p=p+1;

        n=n/10;
    }
    printf("\nNo. of Digits is: %d\n",p);

a=p;

while(temp>0)
{
   b=temp%10;

    //sum=sum+pow(b,a);
    x=1;
    for(i=1;i<=a;i++)
    {
        x=x*b;
    }


    sum=sum+x;
    temp=temp/10;

}
printf("Result is: %d",sum);


if(sum==m)
{
    printf("\nArmStrong\n");
}
else
{
   printf("\nNot ArmStrong\n");
}

}
