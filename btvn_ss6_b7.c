#include <stdio.h>

int main() {
    int n;
    int i; 

    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    printf("Cac uoc cua %d la: ", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i); 
        }
    }

    printf("\n");

    return 0;
}
