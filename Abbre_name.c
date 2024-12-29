#include<stdio.h>

void main(){
char name[50];
int i,j;
printf("Enter Your Name: ");
gets(name);

printf("%c. ",name[0]);

for(i=0;name[i]!='\0';i++){
   if(name[i]==' '){
    j=i+1;
    printf("%c. ",name[j]);
    break;
   }
}

for( ;name[j]!='\0';j++){
if(name[j]==' '){
        j++;
    for( ;name[j]!='\0';j++){
        printf("%c",name[j]);
    }
    break;
}
}
}
