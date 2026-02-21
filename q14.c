//Fibonacci Number
#include<stdio.h>
int fibo(int a){
    if(a<=1){
    return a;}
    else{
        return fibo(a-1)+fibo(a-2);
    }
}
int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
for(int i=0;i<=n;i++){
printf("%d ",fibo(i));
}
return 0;
}