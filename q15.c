//Compute Power Using Recursion
#include<stdio.h>
int num(int a,int pow){
    if(pow==0){
        return 1;
    }
    else{
        return a*num(a,pow-1);
    }
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int power;
    printf("enter the power:");
    scanf("%d",&power);
    printf("%d",num(n,power));
    return 0;
}