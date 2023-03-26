#include "array.h"

Array::Array(int size, int *num) {
    this->size = size;
    for (int i = 0; i < size; i++) {
        arr[i] = num[i];
    }
}

void Array::Print() {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}

Array Array::operator+(Array &other) {
    Array result(size + other.size, arr);
    for (int i = size; i < size + other.size; i++) {
        result.arr[i] = other.arr[i - size];
    }
    return result;
}

bool Array::operator==(Array &other) {
    if (size != other.size) {
        return false;
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] != other.arr[i]) {
            return false;
        }
    }
    return true;
}

bool Array::operator!=(Array &other) {
    return !(*this == other);
}

bool Array::operator>(Array &other) {
    return size > other.size;
}

bool Array::operator<(Array &other) {
    return size < other.size;
