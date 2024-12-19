#include <stdio.h>
#include <math.h>

int main() {
    double a, z1, z2;

    // Введення значення a
    printf("Enter the value of a: ");
    scanf("%lf", &a);

    // Перевірка на допустимість значення a
    if (fabs(2 * a - a * a) < 1e-9 || fabs(2 * a + a * a) < 1e-9) {
        printf("Error: Division by zero in the formula. Please use a different value of a.\n");
        return 1;
    }

    // Обчислення z1
    double numerator1 = (1 + a + a * a) / (2 * a + a * a);
    double numerator2 = (1 - a + a * a) / (2 * a - a * a);
    double denominator = 5 - 2 * a * a;
    z1 = numerator1 + 2 - (1 / numerator2) * denominator;

    // Обчислення z2
    z2 = (4 - a * a) / 2;

    // Виведення результатів
    printf("z1 = %.6lf\n", z1);
    printf("z2 = %.6lf\n", z2);

    return 0;
}
