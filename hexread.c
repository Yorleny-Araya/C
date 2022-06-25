#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        printf("0x%X\n", c);
    }
}