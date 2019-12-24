/*
 * Filename: /Users/Jms/CLionProjects/understanding-and-using-c-pointers/ch01/p029.c
 * Path: /Users/Jms/CLionProjects/understanding-and-using-c-pointers/ch01
 * Created Date: Tuesday, December 24th 2019, 11:24:54 am
 * Author: sepiggy
 * Topic: Constant pointers to nonconstants
 *
 * Copyright (c) 2019 Your Company
 */

#include <stdio.h>

int main() {
    int num;
    int age;
    int *const cpi = &num;
    // cpi = &age; // illegal
}

// int main() {
//     int num = 5;
//     const int limit = 500;
//     int *const cpi = &limit;
//     *cpi = 600;
//     printf("limit=%d\n", limit);
//     return 0;
// }

// int main() {
//     int num = 5;
//     const int limit = 500;
//     int *const cpi = &num;
//     *cpi = 25;
//     printf("num=%d\n", num);
//     return 0;
// }
