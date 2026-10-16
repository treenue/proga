#include <stdio.h>

static int load_mem(void) {
    printf("MEM_OK");
    return 0;
}

static int load_cpu(void) {
    printf("CPU_OK");
    return 0;
}

int main(void) {
    printf("BOOT:");
    load_mem();
    printf("|");
    load_cpu();
    printf(":END\n");
    return 0;
}
