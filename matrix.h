#ifndef OP_3_HEADER_H
#define OP_3_HEADER_H
#include <iostream>
using namespace std;

class Matrix {

public:
    Matrix();

    explicit Matrix(int m[3][3]);

    void Print();

    Matrix Multiply(Matrix other);

    Matrix MultiplyFloat(double n);

    Matrix Plus(Matrix other);

    Matrix Minus(Matrix other);

    bool operator==(const Matrix &other) const;

    bool operator!=(const Matrix &other) const;

    bool operator>(const Matrix &other) const;

    bool operator<(const Matrix &other) const;

private:
    int matrix[3][3];
};

#endif
