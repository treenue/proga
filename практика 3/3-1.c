#include <stdio.h>
#include <string.h>

int main(void)
{
    char Sib[20] = "SibSUTIS";

    printf("SIZEOF: %zu\n", sizeof(Sib));
    printf("STRLEN: %d\n", strlen(Sib));
    printf("FREE_BYTES: %d\n", (int) sizeof(Sib) - (strlen(Sib) + 1));

    return 0;
}
