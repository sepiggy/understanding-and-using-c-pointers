#include <stdio.h>

// If a pointer is declared as global or static,
// it is initialized to NULL when the program starts.
// An example of a global and static pointer follows:
int *globalpi;

void foo() {
    static int *staticpi;
}

int main() {
    printf("the value of the pointer globalpi: %p", globalpi);
    printf("the value of the pointer staticpi: %p", staticpi);

    return 0;
}