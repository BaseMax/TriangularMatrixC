/**
 * 
 * @file TriangularMatrix.c
 * @author Max Base (maxbasecode@gmail.com)
 * @brief Working with large triangular matrix (upper or lower) in C
 * @version 0.1
 * @date 2022-12-02
 * @copyright Copyright (c) 2022
 * 
 */

#include "TriangularMatrix.h"

int main(int argc, char** argv)
{
    // Create a matrix
    TriangularMatrix* tm = createTriangularMatrix(4, 0);

    // Set values
    setTriangularMatrix(tm, 1, 1, 1);
    setTriangularMatrix(tm, 2, 1, 2);
    setTriangularMatrix(tm, 2, 2, 3);
    setTriangularMatrix(tm, 3, 1, 4);
    setTriangularMatrix(tm, 3, 2, 5);
    setTriangularMatrix(tm, 3, 3, 6);
    setTriangularMatrix(tm, 4, 1, 7);
    setTriangularMatrix(tm, 4, 2, 8);
    setTriangularMatrix(tm, 4, 3, 9);
    setTriangularMatrix(tm, 4, 4, 10);

    // Display the matrix
    displayTriangularMatrix(tm);

    // Get value
    printf("Get value: %d\n", getTriangularMatrix(tm, 3, 2));

    // Destroy the matrix
    destroyTriangularMatrix(tm);

    // Create a matrix
    TriangularMatrix* tm2 = createTriangularMatrix(4, 0);

    // Set values
    setTriangularMatrixIndex(tm2, 0, 10);
    setTriangularMatrixIndex(tm2, 1, 20);
    setTriangularMatrixIndex(tm2, 2, 30);
    setTriangularMatrixIndex(tm2, 3, 40);
    setTriangularMatrixIndex(tm2, 4, 50);
    setTriangularMatrixIndex(tm2, 5, 60);
    setTriangularMatrixIndex(tm2, 6, 70);
    setTriangularMatrixIndex(tm2, 7, 80);
    setTriangularMatrixIndex(tm2, 8, 90);
    setTriangularMatrixIndex(tm2, 9, 10);

    // Display the matrix
    displayTriangularMatrix(tm2);

    // Get value
    printf("Get value: %d\n", getTriangularMatrix(tm2, 3, 2));

    // Destroy the matrix
    destroyTriangularMatrix(tm2);

    return 0;
}
