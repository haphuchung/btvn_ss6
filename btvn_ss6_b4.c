#include <stdio.h>

int main() {
    int a, b, c, x1, x2;

    printf("Nhap he so a: ");
    scanf("%d", &a);
    printf("Nhap he so b: ");
    scanf("%d", &b);
    printf("Nhap he so c: ");
    scanf("%d", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            printf("Phuong trinh co mot nghiem: x = %d\n", -c / b);
        }
    } else {
        if (b * b - 4 * a * c < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (b * b - 4 * a * c == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x1 = x2 = %d\n", x1);
        } else {
            x1 = (-b + (b * b - 4 * a * c) / (2 * a)) / 2;
            x2 = (-b - (b * b - 4 * a * c) / (2 * a)) / 2;
            printf("Phuong trinh co hai nghiem: x1 = %d va x2 = %d\n", x1, x2);
        }
    }

    return 0;
}
