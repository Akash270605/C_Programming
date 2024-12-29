#include<stdio.h>

void main(){
char name[50];
int i;
printf("Enter Your Name: ");
gets(name);

for(i=0;name[i]!='\0';i++){
if(name[i]==' '){
        i++;
    for( ;name[i]!=' ';i++){
        printf("%c",name[i]);
    }
   // break;
}
}
}
