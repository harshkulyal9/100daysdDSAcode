//Intersection of two arrays
#include<stdio.h>
int main(){
    int n;
    printf("size of array:");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
     for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                printf("%d ",arr1[i]);
                break;
            }
        }
    }
    return 0;
}