#include <stdio.h>

int main() {
    int vector[] = {28, 41, 7};
    int *pi = vector + 2;

    printf("%p %d\n", pi, *pi);
    pi--;
    printf("%p %d\n", pi, *(pi));
    pi--;
    printf("%p %d\n", pi, *(pi));
    return 0;
}