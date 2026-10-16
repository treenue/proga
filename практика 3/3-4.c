#include <stdio.h>
#include <string.h>

int main(void)
{
    char ts[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";

     printf("%s", ts);
    printf("STRLEN: %d\n", strlen(ts));
    printf("SIZEOF: %zu\n", sizeof(ts));

    return 0;
}
