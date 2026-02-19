//Reverse an Array in place
#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    for(int i=0;i<=n-1;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(int i=0;i<=n-1;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}