#include<stdio.h>

void arr(){
 int a[6],i,j,k,l,tar,sum=0;

tar=16;

printf("Enter the Array: ");
for(i=0;i<6;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<6;i++){
   printf("%d\t",a[i]);
}

for(i=0;i<=2;i++){
    for(j=i+1;j<=3;j++){
            for(k=j+1;k<=4;k++){
                for(l=k+1;l<=5;l++){
    if(tar==a[i]+a[j]+a[k]+a[l]){
        printf("\n\nAnswer is: %d %d %d %d\n",a[i],a[j],a[k],a[l]);
        sum++;
    }
}
}
}

}
if(sum==0){
   printf("\n\nEmpty Array\n");
}
}

void main(){

arr();
}
