#include<stdio.h>

void main(){
int n,i,j,p;

printf("Enter the Range from 2 to ");
scanf("%d",&n);

printf("\nPrime No. are: ");

for(i=2;i<=n;i++){
    p=0;
    for(j=2;j<i;j++){
        if(i%j==0){
            p++;
        }
    }
    if(p==0){
        printf("%d\t",i);
    }
}
}
