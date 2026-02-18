//Missing number in array
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of element of array:");
    scanf("%d",&n);
    int arr[n-1];
    for(int i=0;i<=n-2;i++){
        scanf("%d",&arr[i]);
    }
    int sum=n*(n+1)/2;
    int sum_arr=0;
    for(int i=0;i<=n-2;i++){
        sum_arr=sum_arr+arr[i];
    }
    int missing_element=sum-sum_arr;
    printf("the missing element is:%d",missing_element);
    return 0;
}