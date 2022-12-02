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

/**
 * @brief Create a Triangular Matrix object
 * @param n: size of matrix
 * @param def: default value
 * @return TriangularMatrix
 */
TriangularMatrix* createTriangularMatrix(int n, int def)
{
    TriangularMatrix* tm = (TriangularMatrix*)malloc(sizeof(TriangularMatrix));
    tm->n = n;
    tm->A = (int*)malloc(n * (n + 1) / 2 * sizeof(int));
    tm->def = def;
    for (int i = 0; i < n * (n + 1) / 2; i++) {
        tm->A[i] = def;
    }
    return tm;
}

/**
 * @brief Set value of matrix
 * @param tm: TriangularMatrix
 * @param i: row
 * @param j: column
 * @param x: value
 */
void setTriangularMatrix(TriangularMatrix* tm, int i, int j, int x)
{
    if (i >= j)
        tm->A[i * (i - 1) / 2 + j - 1] = x;
}

/**
 * @brief Put the value of matrix without worrying about the order of i and j
 * @param tm: TriangularMatrix
 * @param index: index
 * @param x: value
 */
void setTriangularMatrixIndex(TriangularMatrix* tm, int index, int x)
{
    tm->A[index] = x;
}

/**
 * @brief Get value of matrix
 * @param tm: TriangularMatrix
 * @param i: row
 * @param j: column
 * @return int
 */
int getTriangularMatrix(TriangularMatrix* tm, int i, int j)
{
    if (i >= j)
        return tm->A[i * (i - 1) / 2 + j - 1];
    return 0;
}

/**
 * @brief Display the matrix
 * @param tm: TriangularMatrix
 */
void displayTriangularMatrix(TriangularMatrix* tm)
{
    int i, j;
    for (i = 1; i <= tm->n; i++) {
        for (j = 1; j <= tm->n; j++) {
            if (i >= j)
                printf("%d ", tm->A[i * (i - 1) / 2 + j - 1]);
            else
                printf("%d ", tm->def);
        }
        printf("\n");
    }
}

/**
 * @brief Destroy the Triangular Matrix object
 * @param tm: TriangularMatrix
 */
void destroyTriangularMatrix(TriangularMatrix* tm)
{
    free(tm->A);
    free(tm);
}
