//Remove Duplicates from Sorted Array
#include <stdio.h>

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n == 0 || n == 1) {
        printf("Array after removing duplicates:\n");
        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        return 0;
    }

    int j = 0;  

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j] = arr[i];
            j++;
        }
    }

    arr[j] = arr[n - 1];  
    n = j + 1;           

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}