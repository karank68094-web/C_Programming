#include<stdio.h>

int main()
{
    int i, n,number, sum = 0;


    for(i = 1; i <= 5; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &n);

        sum = sum + n;
    }
    number=sum/5;

    printf("Sum = %d\n number=%d\n", sum ,number);

    return 0;
}
