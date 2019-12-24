#include <stdio.h>
#include <stdint.h>
int main() {
    int num = 1234;
    intptr_t *pi = &num;
    printf("%d", *pi);
    printf("\n");

    char c = 'c';
    pi = &c;
    printf("%c", *pi);
    return 0;
}