//Maximum Sum Circular Subarray
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

    int totalSum = 0;
    int maxSum = arr[0], currMax = 0;
    int minSum = arr[0], currMin = 0;

    for(int i = 0; i < n; i++) {

        totalSum += arr[i];

        
        currMax += arr[i];
        if(currMax > maxSum)
            maxSum = currMax;
        if(currMax < 0)
            currMax = 0;

        
        currMin += arr[i];
        if(currMin < minSum)
            minSum = currMin;
        if(currMin > 0)
            currMin = 0;
    }

    
    if(maxSum < 0) {
        printf("Maximum Circular Subarray Sum = %d", maxSum);
        return 0;
    }

    int circularSum = totalSum - minSum;

    if(circularSum > maxSum)
        printf("Maximum Circular Subarray Sum = %d", circularSum);
    else
        printf("Maximum Circular Subarray Sum = %d", maxSum);

    return 0;
}