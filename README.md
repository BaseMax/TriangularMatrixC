# Triangular Matrix C

This is a simple C program that creates a triangular matrix and prints it to the screen. The program is written in C and uses the C99 standard. This library is good to use for a quick and easy way to create a triangular matrix.

## Functions

- `TriangularMatrix* createTriangularMatrix(int n, int def)`: Creates a triangular matrix with size n and default value def
- `void setTriangularMatrix(TriangularMatrix* tm, int i, int j, int x)`: Set value of matrix at position i, j
- `void setTriangularMatrixIndex(TriangularMatrix* tm, int index, int x)`: Put the value of matrix without worrying about the order of i and j
- `int getTriangularMatrix(TriangularMatrix* tm, int i, int j)`: Get value of matrix
- `void displayTriangularMatrix(TriangularMatrix* tm)`: Display the matrix
- `void destroyTriangularMatrix(TriangularMatrix* tm)`: Destroy the Triangular Matrix object

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

Output:
```
1 0 0 0
2 3 0 0
4 5 6 0
7 8 9 10
Get value: 5
```

And another example:

```c

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
```

Output:

```bash
10 0 0 0
20 30 0 0
40 50 60 0
70 80 90 10
Get value: 50
```

That's it! You can now use the library to create a triangular matrix.

© Copyright Max Base, 2022
