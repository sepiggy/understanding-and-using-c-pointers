#include <stdio.h>
int main() {
    int num[] = {1, 2, 3, 4, 5};
    void *pv = &num;
    printf("%p\n", pv);
    pv = pv + 1;
    // printf("%d\n", *(pv + 1)); // error
    printf("%p\n", pv);
    return 0;
}