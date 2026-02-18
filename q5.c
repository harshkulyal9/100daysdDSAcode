//Linear Search with Comparison Count
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of element:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int searching_value;
    printf("enter the number you want to search:");
    scanf("%d",&searching_value);
    int found=0;
    int comparision=0;
    for(int i=0;i<=n-1;i++){
        comparision++;
        if(arr[i]==searching_value){
            printf("%d found at index %d\n",searching_value,i);
            found=1;
            break;
        }
    
    }
    if(found!=1){
        printf("value is not in array");
    }
    printf("number of time comparison made:%d",comparision);
    return 0;
}