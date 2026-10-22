#include <stdio.h>

#define KJ_IN_MJ 1000

int main (void)
{
    int kj;
    int mj;
    int rest_kj;
    double mj_real;

    printf("Введите энергию в кДж: \n");

    while (scanf("%d", &kj) == 1 && kj > 0)
    {
        mj = kj / KJ_IN_MJ;
        rest_kj = kj % KJ_IN_MJ;
        mj_real = (double)kj / KJ_IN_MJ;

        printf("%d кДж = %d МДж %d кДж\n", kj, mj, rest_kj);
        printf("(в вещественном виде: %.3f МДж)\n\n", mj_real);
        printf("\nВведите следующее значение: ");
    }

    printf("Программа завершена.\n");
    return 0;
}