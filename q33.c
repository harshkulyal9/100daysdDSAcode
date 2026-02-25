//Find Maximum and Minimum Element
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
     for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    
    printf("the maximun element is : %d and the minimum element is : %d",max,min);
    return 0;

}