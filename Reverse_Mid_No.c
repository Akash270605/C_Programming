#include<stdio.h>
#include<stdlib.h>

void main(){
int i,j,n,a[10],rev[10],temp;

printf("Enter the Array: ");
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}

for(i=0;i<10;i++){
    printf("\t%d",a[i]);
}
printf("\nReverse upto : ");
scanf("%d",&n);

for(i=0;i<n/2;i++){
    temp=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=temp;
}
for(i=0;i<10;i++){
    printf(" %d\t",a[i]);
}

}
