#include <stdio.h>

int main() {
    int x = 5+65, y = 0;
    do {
        y = (x % 2) + 10 * y;
        x = x / 2;
        printf("x = %d, y = %d\n", x, y );
    } while (x != 0);


    while (y != 0) {
        x = y % 100;
        y = y / 10;
        printf("x = %d, y = %d\n", x, y );
    }
}