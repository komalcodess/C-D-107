#include <stdio.h>

int main() {
    int n = 1234;

    while (n > 0) {
        printf("%d ", n % 10);
        n = n / 10;
    }

    return 0;
}
