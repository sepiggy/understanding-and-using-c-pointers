/*
 * Filename: /Users/Jms/CLionProjects/understanding-and-using-c-pointers/ch01/p024.c
 * Path: /Users/Jms/CLionProjects/understanding-and-using-c-pointers/ch01
 * Created Date: Monday, December 23rd 2019, 7:21:36 pm
 * Author: sepiggy
 * Topic: Subtracting two pointers
 *
 * Copyright (c) 2019 Your Company
 */

#include <stdio.h>

int main() {
    int vector[] = {28, 41, 7};
    int *p0 = vector;
    int *p1 = vector + 1;
    int *p2 = vector + 2;

    printf("p2-p0: %d\n", p2-p0);
    printf("p2-p1: %d\n", p2-p1);
    printf("p0-p1: %d\n", p0-p1);
}