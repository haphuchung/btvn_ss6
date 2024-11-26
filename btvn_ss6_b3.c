#include <stdio.h>

int main() {
    char password[] = "123";
    char userInput[50];
    int i = 0, isMatch = 1;

    printf("Nhap mat khau: ");
    scanf("%s", userInput);

    while (password[i] != '\0' || userInput[i] != '\0') {
        if (password[i] != userInput[i]) {
            isMatch = 0;
            break;
        }
        i++;
    }

    if (isMatch) {
        printf("Mat khau dung!\n");
    } else {
        printf("Mat khau sai!\n");
    }

    return 0;
}
