//Arrange Arrival Logs
#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter number of arrival logs: ");
    scanf("%d", &n);

    int logs[n];

    printf("Enter arrival log values:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &logs[i]);
    }

    
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(logs[j] > logs[j + 1]) {
                temp = logs[j];
                logs[j] = logs[j + 1];
                logs[j + 1] = temp;
            }
        }
    }

    printf("Arranged Arrival Logs (Ascending Order):\n");
    for(i = 0; i < n; i++) {
        printf("%d ", logs[i]);
    }

    return 0;
}