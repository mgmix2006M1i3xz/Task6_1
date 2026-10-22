#include <stdio.h>
#include <locale.h>
#include <math.h>

int word1() {

    int year;
    printf("Введите год для проверки: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        printf("Год %d високосный\n", year);
    } else {
        printf("Год %d не високосный\n", year);
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Год %d високосный\n", year);
    }
    else {
        printf("Год %d не високосный\n", year);
    }

    return 0;
}
int main() {

    setlocale(LC_ALL, "Rus");



    return 0;
}