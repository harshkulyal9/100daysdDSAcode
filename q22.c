//Transpose Matrix
#include<stdio.h>
int main(){
    int n;
    int m;
    printf("enter the number of rows:");
    scanf("%d",&n);
    printf("enter the number of column:");
    scanf("%d",&m);
    int transpose[n][m];
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           transpose[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",transpose[i][j]);
        }
        printf("\n");;
    }
    return 0;

}