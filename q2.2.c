
#include <stdio.h>

int main() {
    int n, i;
    float num, sum;

    printf("Enter number of values: ");
    scanf("%d", &n);
    
      if (n <= 0) {
   
        printf("Invalid input");
        return 0;
    }

    printf("Enter number 1: ");
    scanf("%f", &sum);

    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum = sum + num;
    }

    printf("Sum = %.2f\n", sum);

    return 0;
}

