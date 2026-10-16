#include <stdio.h>

int main(void)
{
    char osn[20];
    int width;

    scanf("%s %d", osn, &width);

    printf("%*s\n", width, osn);
    printf("%-*s\n", width+5, osn);

    return 0;
}