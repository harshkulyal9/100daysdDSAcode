//Power of Two
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("False\n");
        return 0;
    }

    int power = 1;

    while (power < n) {
        power = power * 2;
    }

    if (power == n)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}