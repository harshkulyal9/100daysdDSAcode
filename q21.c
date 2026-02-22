//Matrix Addition
#include<stdio.h>
int main(){
    int n;
    int m;
    printf("enter number of row of matrix:");
    scanf("%d",&n);
    printf("enter number of column of matrix:");
    scanf("%d",&m);
    int arr[n][m];
    int brr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    int sum[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<=m;j++){
            sum[i][j]=arr[i][j]+brr[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
   return 0;
}
