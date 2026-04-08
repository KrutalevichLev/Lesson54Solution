// Task 11 [The arithmetic mean]
// Среднее арифметическое
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет среднее арифметическое элементов вектора.

#include "logic.h"

double recursion(int vector[], int size) {
    
    if (size < 0) {
        return 0;
    }

    return vector[size] + recursion(vector, size - 1);
}

double calculate_average(int vector[], int size) {
    if (size <= 0) {
        return -1; 
    }

    return recursion(vector, size - 1) / size;
}