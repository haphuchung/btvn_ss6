#include <stdio.h>

int main() {
    int number; 
    
    int even_count = 0, odd_count = 0;
    
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("Nhap so nguyen thu %d: ", i + 1);
        scanf("%d", &number);

        if (number % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("So luong so chan: %d\n", even_count);
    printf("So luong so le: %d\n", odd_count);

    return 0;
}
