//Check Palindrome
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int num=n;
    int r=0;
    while(n!=0){
        r=r*10+n%10;
        n=n/10;
    }
    if(num==r){
        printf("palindrome number");}
    else{
        printf("not palindrome number");
        }
    
    return 0;
}