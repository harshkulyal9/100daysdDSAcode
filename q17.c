//Reverse String
#include<stdio.h>
#include<string.h>
int main(){
char str[100];
printf("enter the string:");
scanf("%s",str);
int length=strlen(str);
int temp=0;
for(int i=0;i<length/2;i++){
    temp=str[i];
    str[i]=str[length-1-i];
    str[length-1-i]=temp;
}
printf("the reverse of string is:%s",str);
return 0;
}