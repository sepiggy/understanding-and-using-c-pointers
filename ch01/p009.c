#include <stdlib.h>
#include <stdio.h>

int main() {
    long int num = 0;
    long int *pi = &num;

    printf("Address of num: %ld Value: %ldd\n", &num, num);
    printf("Adress of pi: %ld Value: %ld\n", &pi, pi);
    return 0;
}