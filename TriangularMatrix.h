#ifndef _TRIANGULARMATRIX_H_
#define _TRIANGULARMATRIX_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct TriangularMatrix
{
    int n;
    int *A;
} TriangularMatrix;

/**
 * @brief Create a Triangular Matrix object
 * @param n: size of matrix
 * @param def: default value
 * @return TriangularMatrix
 */
TriangularMatrix* createTriangularMatrix(int n, int def);

/**
 * @brief Set value of matrix
 * @param tm: TriangularMatrix
 * @param i: row
 * @param j: column
 * @param x: value
 */
void setTriangularMatrix(TriangularMatrix* tm, int i, int j, int x);

/**
 * @brief Get value of matrix
 * @param tm: TriangularMatrix
 * @param i: row
 * @param j: column
 * @return int
 */
int getTriangularMatrix(TriangularMatrix* tm, int i, int j);

/**
 * @brief Display the matrix
 * @param tm: TriangularMatrix
 */
void displayTriangularMatrix(TriangularMatrix* tm);

/**
 * @brief Destroy the Triangular Matrix object
 * @param tm: TriangularMatrix
 */
void destroyTriangularMatrix(TriangularMatrix* tm);

#endif
