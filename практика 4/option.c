#include <stdio.h>

int main (void)
{

    int number;
    number = 111260192;

printf("%d\n", (number % 30) + 1);
printf("%d\n", ((number + 7) % 30) + 1);
printf("%d\n", ((number + 13) % 30) + 1);
printf("%d\n", ((number + 19) % 30) + 1);
printf("%d\n", ((number + 23) % 30) + 1);

    return 0;
}
