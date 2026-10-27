
#include <stdio.h>

int main() {
    int n, i;
    float a, sum = 0, H;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &a);

        if (a == 0) {
            printf("Zero is not allowed");
            return 0;
        }

        sum = sum + 1.0f / a;
    }

    H = n / sum;

    printf("Harmonic Mean = %.2f", H);

    return 0;
}

