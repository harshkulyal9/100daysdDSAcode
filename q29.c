//diagonal sum
#include<stdio.h>
int main(){
    int n;
    printf("enter the rows of array:");
    scanf("%d",&n);
    int m;
    printf("enter the column of array:");
    scanf("%d",&m);
    if(n!=m){
        printf("digonal sum cannot be done");
        return 0;
    }
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                sum=sum+arr[i][j];
            }
            else{
                continue;
            }
        }
    }
    printf("the sum of diagonal elemnet is: %d",sum);
    return 0;
}

    