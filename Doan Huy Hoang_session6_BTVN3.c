#include <stdio.h>
#include <math.h>

int main() {
    int n, m, r = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    m = n;
    while (m > 0) {
        r = r * 10 + m % 10;
        m /= 10;
    }

    if (r == n)
        printf("La so doi xung");
    else
        printf("Khong phai so doi xung");
    return 0;
}
  
