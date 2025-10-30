#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Nhap chieu dai m va chieu rong n: ");
    if (scanf("%d %d", &m, &n) != 2) {
        printf("Nhap sai. Thoat.\n");
        return 1;
    }
    if (m <= 0 || n <= 0) {
        printf("m va n phai > 0.\n");
        return 1;
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) putchar('*');
        putchar('\n');
    }
    return 0;
}




