# Triangular Matrix C

This is a simple C program that creates a triangular matrix and prints it to the screen. The program is written in C and uses the C99 standard. This library is good to use for a quick and easy way to create a triangular matrix.

## Usage

To use this library, simply download the `TriangularMatrix.c` and `TriangularMatrix.h` file and include it in your project. Then, you can use the `createTriangularMatrix` function to create a triangular matrix. The function takes in two parameters: the size of the matrix and the value to fill the matrix with. The function returns a pointer to the matrix.

```c
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
```
