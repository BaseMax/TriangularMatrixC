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
    TriangularMatrix* tm = createTriangularMatrix(4);

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

    return 0;
}
