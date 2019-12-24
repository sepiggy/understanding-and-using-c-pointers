#include <stdio.h>

int main() {
    int num = 5;
    const int limit = 500;
    int *pi;
    const int *pci;

    pi = &num;
    pci = &limit;

    // *pci = 200; // illegal

    pci = &num; // legal
    // *pci = 200; // illegal

    return 0;
}
