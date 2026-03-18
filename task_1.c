//
// Created by marce on 3/18/2026\
//create a program that can find the multiplication of two pointers using a funtion and pointer;

#include <stdio.h>

int* findmult(int* num1, int* num2, int* num3) {
    int nultiplication = *num1 * *num2;
    *num3 = nultiplication;
return num3;
}

int main() {
    int num1= 13;
    int num2 = 9;
    int num3;
    int* resutl=findmult(&num1, &num2, &num3);
    printf("this is the answer:%d", *resutl);
}