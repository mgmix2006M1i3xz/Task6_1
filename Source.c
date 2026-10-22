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
int word2() {
    double x, F;

    printf("Введите значение x: ");
    scanf("%lf", &x);

    if (x < 3.2) {
        F = pow(x, 4) + 9;
    }
    else {
        F = (54 * pow(x, 4)) / (-5 * pow(x, 2) + 7);
    }

    printf("F(x) = %g %s\n",
        F,
        (x < 3.2) ? "(вычислено по первой формуле)" : "(вычислено по второй формуле)");

    return 0;
}
int word3() {
    int x, y;

    printf("Введите первое число X: ");
    scanf("%d", &x);
    printf("Введите второе число Y: ");
    scanf("%d", &y);

    if (x < y) {
        printf("%d < %d\n", x, y);
    }
    else if (x == y) {
        printf("%d = %d\n", x, y);
    }
    else {
        printf("%d > %d\n", x, y);
    }

    return 0;
}
int main() {

    setlocale(LC_ALL, "Rus");
    word1();
    word2();
    word3();

    return 0;
}