#pragma once
#include "matrix.h"
#include <iostream>
#include <cstring>

class Vector
{
    float *entries;
    int length;

    Vector();

    // Construct and Initialize with 0
    Vector(int len);

    // Construct and Initialize with the value
    Vector(int len, float value);

    // Construct and Initialize with the return value of the function
    Vector(int len, float* f);
    
    // Copy Constructor
    Vector(const Vector& other);

    Vector& operator+(float scalar);
    Vector& operator+(const Vector& other);
    
    Vector& operator-(float scalar);
    Vector& operator-(const Vector& other);

    Vector& operator*(float scalar);
    Vector& operator*(const Vector& other);
    friend Vector& operator*(const Matrix& other);

    Vector& operator/(float scalar);

    float operator[](int idx);
};

Vector operator+(float scalar, const Vector& vector);