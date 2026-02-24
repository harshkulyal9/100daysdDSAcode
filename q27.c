//Check Identity Matrix
#include<stdio.h>
int main(){
    int n;
    printf("enter the rows of array:");
    scanf("%d",&n);
    int m;
    printf("enter the column of array:");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          scanf("%d",&arr[i][j]);
        }
    }
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j && arr[i][j]!=1){
                flag=1; 
                break;
            }
            if(i!=j && arr[i][j]!=0){
                flag=1;
                break;
            }
        }
    }
   if(n!=m){
    printf("not identity matrix");
   }
   else if(flag==1){
    printf("not identity matrix");
   }
   else{
    printf("identity matrix");
   }
    return 0;
}

