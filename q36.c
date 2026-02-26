//Product of Array Except Self

#include <stdio.h>

void productExceptSelf(int arr[], int n) {
    int totalProduct = 1;
    int zeroCount = 0;

    
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            zeroCount++;
        } else {
            totalProduct *= arr[i];
        }
    }

    printf("Product array:\n");

    for(int i = 0; i < n; i++) {

        if(zeroCount > 1) {
            printf("0 ");
        }
        else if(zeroCount == 1) {
            if(arr[i] == 0)
                printf("%d ", totalProduct);
            else
                printf("0 ");
        }
        else {
            printf("%d ", totalProduct / arr[i]);
        }
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    productExceptSelf(arr, n);

    return 0;
}