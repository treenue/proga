#include <stdio.h>

int main(void)
{
    char prog;

    scanf("%c", &prog);

    printf("CODE_DEC: %d\n", prog);
    printf("CODE_HEX: %x\n", prog);
    printf("CODE_OCT: %o\n", prog);
    printf("UPPER: %c\n", prog-32);
    printf("NEXT: %c\n", prog+1);
    printf("PREV: %c\n", prog-1);

    return 0;
}