#include <stdio.h>

int main (void)
{
    int n;
    int i = 0;
    int current = 1;

    printf("Введите количество элементов N: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Ошибка: N должно быть положительным целым числом.\n");
        return 1;
    }

    while (++i <= n)
    {
        printf("%d ", current);
        current += 7; 
    }

    printf("\n");
    return 0;
}