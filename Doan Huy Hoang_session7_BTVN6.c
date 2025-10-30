#include <stdio.h>

int main() {
    int n, rev = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    while (n != 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    printf("So dao nguoc la: %d", rev);
    return 0;
}

