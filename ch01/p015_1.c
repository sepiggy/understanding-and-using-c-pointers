#include <stdio.h>
#include <stddef.h>

int main(void)
{
    size_t size = sizeof(void*);
    printf("%ld\n", size);
    return 0;
}