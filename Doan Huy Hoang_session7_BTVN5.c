#include <stdio.h>
#include <math.h>

int main() {
    int i, n, num, r, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nArmstrong numbers are:\n");

    for (i = 1; i <= num; i++) {
        n = i;
        sum = 0;

        while (n != 0) {
            r = n % 10;
            sum = sum + (r * r * r);
            n = n / 10;
        }

        if (i == sum) {
            printf("%d ", i);
        }
    }

    return 0;
}

