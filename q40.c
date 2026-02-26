//3Sum
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n < 3) {
        printf("Need at least 3 elements");
        return 0;
    }

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Triplets with sum 0 are:\n");

    for(int i = 0; i < n - 2; i++) {

        
        if(i > 0 && arr[i] == arr[i - 1])
            continue;

        int left = i + 1;
        int right = n - 1;

        while(left < right) {

            int sum = arr[i] + arr[left] + arr[right];

            if(sum == 0) {
                printf("%d %d %d\n", arr[i], arr[left], arr[right]);

               
                while(left < right && arr[left] == arr[left + 1])
                    left++;

                while(left < right && arr[right] == arr[right - 1])
                    right--;

                left++;
                right--;
            }
            else if(sum < 0)
                left++;
            else
                right--;
        }
    }

    return 0;
}