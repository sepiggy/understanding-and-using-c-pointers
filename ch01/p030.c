/*
 * Filename: /Users/Jms/CLionProjects/understanding-and-using-c-pointers/ch01/p030.c
 * Path: /Users/Jms/CLionProjects/understanding-and-using-c-pointers/ch01
 * Created Date: Tuesday, December 24th 2019, 11:43:39 am
 * Author: sepiggy
 * Topic: Constant pointers to constants
 *
 * Copyright (c) 2019 Your Company
 */

#include <stdio.h>

int main() {
    int num = 5;
    const int limit = 500;
    const int * const cpci = &num;
    *cpci = 6;

    return 0;
}