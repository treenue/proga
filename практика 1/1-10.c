#include <stdio.h>

#define NODE_ID 42
#define PACKET_SIZE (NODE_ID * 4)

int ping(void) {
    printf("PING");
    return 0;
}

int pong(void) {
    printf("PONG");
    return 0;
}

int handshake(void) {
    ping();
    printf("-");
    pong();
    printf("-");
    ping();
    return 0;
}

int main(void) {
    const int packet_size = PACKET_SIZE;
    const int total_transfer = packet_size * 3;

    handshake();
    printf(":%d\n", packet_size);
    handshake();
    printf(":%d\n", total_transfer);
    printf("SESSION:CLOSED\n");

    return 0;
}
