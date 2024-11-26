#include <stdio.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            printf("Phuong trinh co mot nghiem: x = %.2f\n", -c / b);
        }
    } else {
        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", x1);
        } else {
            x1 = (-b + delta / (2 * a)) / 2;
            x2 = (-b - delta / (2 * a)) / 2;
            printf("Phuong trinh co hai nghiem: x1 = %.2f va x2 = %.2f\n", x1, x2);
        }
    }

    return 0;
}
