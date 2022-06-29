#include <stdio.h>

main() {
    unsigned int a = 10;
    signed int b = -100;
    if (a > b) {
        printf("a=%d, b=%d\n", a, b);
        printf("a > b\n");
    }
    else {
        printf("a=%d, b=%d\n", a, b);
        printf("a < b\n");
    }
}
