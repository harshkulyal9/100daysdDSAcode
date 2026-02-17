//Two Sum
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   
    }

    int target;
    printf("Enter the target: ");
    scanf("%d", &target);

    int found = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {   
            if(arr[i] + arr[j] == target) {
                printf("Pair found at indices %d and %d\n", i, j);
                found = 1;
            }
        }
    }

    if(!found) {
        printf("No pair found.\n");
    }

    return 0;
}
