#include <stdio.h>
#include <stddef.h>

int main()
{
    size_t sizet = -5;
    printf("%d\n", sizet);
    printf("%zu\n", sizet);
    printf("%u\n", sizet);
    printf("%lu\n", sizet);

    return 0;
}