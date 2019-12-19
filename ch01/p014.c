#include <stdio.h>
int main() {

    int num = 100;
    int *pi = &num;
    printf("Value of pi: %d\n", *pi);
    void *pv = pi;
    pi = (int*)pv;
    printf("Value of pi: %d\n", *pi);

    return 0;
}