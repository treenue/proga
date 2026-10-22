#include <stdio.h>

int main (void)
{
    int n;
    int count = 0;
    double x;
    double sum = 0.0;
    double product = 1.0;
    double combinations;

    printf("Введите количество чисел: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Ошибка: N должно быть положительным целым числом.\n");
        return 1;
    }

    combinations = (double)n * (n - 1) / 2;

    printf("Введите %d чисел через пробел:\n", n);

    while (count < n)
    {
        if (scanf("%lf", &x) != 1)
        {
            printf("Ошибка ввода числа.\n");
            return 1;
        }

        sum += x;
        product *= x;
        count++;
    }

    printf("\nC(%d, 2) = %.6f\n", n, combinations);
    printf("Сумма введённых чисел        = %.6f\n", sum);
    printf("Произведение введённых чисел = %.6f\n", product);

    return 0;
}