#include <stdio.h>
#include <stdint.h> 
#include <inttypes.h>

int main (void)
{
    uint16_t m;
    uint16_t h;
    float energy;

    printf("Введите массу: ");

    if (scanf("%" SCNu16, &m) != 1)
    {
        printf("Ошибка ввода массы.\n");
        return 1;
    }

    printf("Введите высоту: ");
    if (scanf("%" SCNu16, &h) != 1)
    {
        printf("Ошибка ввода высоты.\n");
        return 1;
    }

    energy = (float)m * 9.81 * h;

    printf("\nЭнергия E = m * g * h = %.2f Дж\n", energy);

    return 0;
}

 // uint16_t - целый беззнаковый тип ровно 16 бит 
 // SCNu16 - правильный спецификатор для scanf с uint16_t