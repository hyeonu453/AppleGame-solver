#pragma once
#include "vector.h"
#include <iostream>
#include <cstring>

class Matrix
{
    float **entries;
    int length;

    Matrix();

    // Construct and Initialize with 0
    Matrix(int nrows, int ncols);

    // Construct and Initialize with the value
    Matrix(int nrows, int ncols, float value);

    // Construct and Initialize with the return value of the function
    Matrix(int nrows, int ncols, float* f);
    
    // Copy Constructor
    Matrix(const Matrix& other);

    Matrix& operator+(float scalar);
    Matrix& operator+(const Matrix& other);
    
    Matrix& operator-(float scalar);
    Matrix& operator-(const Matrix& other);

    Matrix& operator*(float scalar);
    Matrix& operator*(const Matrix& other);
    friend Matrix& operator*(const Vector& other);

    Matrix& operator/(float scalar);

    float operator[](int idx);
};

Matrix operator+(float scalar, const Matrix& Matrix);