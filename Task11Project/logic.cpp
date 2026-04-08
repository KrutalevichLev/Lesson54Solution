// Task 11 [The arithmetic mean]
// Среднее арифметическое
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет среднее арифметическое элементов вектора.

#include "logic.h"

double avg(int vector[], int size) {
    double sum = sum_recirsion(vector, size);

    return sum / size;
}

int sum_recirsion(int vector[], int size) {

    if (size <= 0) {
        return 0;
    }

    return vector[size - 1] + sum_recirsion(vector, size - 1);
}

double calculate_average(int vector[], int size) {
    if (size <= 0) {
        return -1;
    }

    return avg(vector, size);
}