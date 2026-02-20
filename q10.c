//Merge Sorted Array
#include <stdio.h>

int main() {
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter elements of first sorted array:\n");
    for(int x = 0; x < n1; x++) {
        scanf("%d", &arr1[x]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter elements of second sorted array:\n");
    for(int x = 0; x < n2; x++) {
        scanf("%d", &arr2[x]);
    }

    int merged[n1 + n2];


    while(i < n1 && j < n2) {
        if(arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    
    while(i < n1) {
        merged[k++] = arr1[i++];
    }

    while(j < n2) {
        merged[k++] = arr2[j++];
    }

    printf("Merged Sorted Array:\n");
    for(int x = 0; x < n1 + n2; x++) {
        printf("%d ", merged[x]);
    }

    return 0;
}