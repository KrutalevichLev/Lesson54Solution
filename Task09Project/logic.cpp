// Task 09 [The sum VI]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму цифр заданного числа, кратных 5.

#include "logic.h"

int recursion(int number) {
    if (number == 0) {
        return 0;
    }

    int last_digit = number % 10;


    int add = last_digit % 5 != 0 ? 0 : last_digit;

    return add + sum(number / 10);
}

int sum(int number) {

    number = (number < 0) ? -number : number;

    return recursion(number);
}