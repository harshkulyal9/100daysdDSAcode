//Rotate Array by K Positions
#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    int temp[n];
    
    k = k % n;  
    
    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter K value: ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    printf("Array after right rotation:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}