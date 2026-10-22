#include <stdio.h>


double a_to_ma (double a)
{
    const double FACTOR = 1000.0;

    return a * FACTOR;
}

int main (void)
{
    double value;
    double result;

    printf("Введите силу тока в амперах:\n");

    while (scanf("%lf", &value) == 1)
    {
        result = a_to_ma(value);

        printf("%.2f А = %.2f мА\n", value, result);

        printf("Введите следующее значение:\n");
    }

    printf("Программа завершена.\n");
    return 0;
}