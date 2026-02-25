//maximum subarray
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = arr[0];

    for(int i = 0; i < n; i++) {
        int current_sum = 0;

        for(int j = i; j < n; j++) {
            current_sum += arr[j];

            if(current_sum > max_sum) {
                max_sum = current_sum;
            }
        }
    }

    printf("Maximum Subarray Sum = %d", max_sum);

    return 0;
}