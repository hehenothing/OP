#include "matrix.h"

Matrix::Matrix() {
    for (auto & i : matrix) {
        for (int & j : i) {
            j = 0;
        }
    }
}

Matrix::Matrix(int m[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = m[i][j];
        }
    }
}

void Matrix::Print() {
    for (auto & i : matrix) {
        for (int j = 0; j < 3; j++) {
            cout << i[j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

Matrix Matrix::Multiply(Matrix other) {
    Matrix res;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                res.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
            }
        }
    }
    return res;
}

Matrix Matrix::MultiplyFloat(double n) {
    Matrix res;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            res.matrix[i][j] = matrix[i][j] * n;
        }
    }

    return res;
}

Matrix Matrix::Plus(Matrix other) {
    Matrix res;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            res.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
        }
    }
    return res;
}

Matrix Matrix::Minus(Matrix other) {
    Matrix res;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            res.matrix[i][j] = matrix[i][j] - other.matrix[i][j];
        }
    }
    return res;
}

bool Matrix::operator==(const Matrix& other) const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != other.matrix[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool Matrix::operator!=(const Matrix& other) const {
    return !(*this == other);
}

bool Matrix::operator>(const Matrix& other) const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] <= other.matrix[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool Matrix::operator<(const Matrix& other) const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] >= other.matrix[i][j]) {
                return false;
            }
        }
    }
    return true;
}


