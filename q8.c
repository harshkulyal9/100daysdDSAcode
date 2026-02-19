//Remove Element
#include<stdio.h>

int main(){
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("Enter position to remove (0 to %d): ", n-1);
    scanf("%d", &pos);

    if(pos < 0 || pos >= n){
        printf("Invalid position!");
        return 0;
    }

    
    for(int i = pos; i < n-1; i++){
        arr[i] = arr[i+1];
    }

    n--;  

    printf("Array after removal: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
