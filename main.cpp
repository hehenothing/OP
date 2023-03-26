#include "matrix.h"
#include "array.h"

int main() {

    // матрица 1
    int matrix1[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    Matrix Matrix1(matrix1);
    cout << "matrix1" << endl;
    Matrix1.Print();

    //матрица 2
    int matrix2[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    Matrix Matrix2(matrix2);
    cout << "matrix2" << endl;
    Matrix2.Print();

    // умножение матриц
    Matrix MatrixM;
    MatrixM = Matrix1.Multiply(Matrix2);
    cout << "matrix1 & matrix2 multiply" << endl;
    MatrixM.Print();

    // умножение на вещественное число
    Matrix MatrixF;
    MatrixF = Matrix1.MultiplyFloat(3.0);
    cout << "matrix1 multiply float" << endl;
    MatrixF.Print();

    // сложенние
    Matrix MatrixP;
    MatrixP = Matrix1.Plus(Matrix2);
    cout << "matrix1 plus matrix2" << endl;
    MatrixP.Print();

    // вычитание
    Matrix MatrixMi;
    MatrixMi = Matrix1.Minus(Matrix2);
    cout << "matrix1 minus matrix2" << endl;
    MatrixMi.Print();

    if (Matrix1 == Matrix2) {
        cout << "is equal" << endl;
    }

    if (Matrix1 != Matrix2) {
        cout << "is not equal" << endl;
    }

    if (Matrix1 > Matrix2) {
        cout << "matrix1 is bigger" << endl;
    }

    if (Matrix1 < Matrix2) {
        cout << "matrix1 is less" << endl;
    }



    int array1[5] = { 1, 2, 3, 4, 5 };
    int array2[4] = { 9, 8, 7, 6};

    Array Array1(5, array1);
    cout << "array1" << endl;
    Array1.Print();

    Array Array2(4, array2);
    cout << "array2" << endl;
    Array2.Print();

    Array ArrayP(Array1 + Array2);
    cout << "array1 + array2" << endl;
    ArrayP.Print();

    cout << "compare" << endl;
    if (Array1 == Array2) {
        cout << "is equal" << endl;
    }

    if (Array1 != Array2) {
        cout << "is not equal" << endl;
    }

    if (Array1 > Array2) {
        cout << "is longer" << endl;
    }

    if (Array1 < Array2) {
        cout << "is not longer" << endl;
    }

    return 0;
}
