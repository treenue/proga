#include <stdio.h>
#include <string.h>

int main(void)
{
    char wordone[15], wordtwo[15];

    scanf("%14s %14s", wordone, wordtwo);

    printf("%s-%s\n", wordone, wordtwo);
    printf("TOTAL_LEN: %d\n", strlen(wordone) + strlen(wordtwo));

    return 0;
}

