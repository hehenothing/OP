#ifndef OP_3_ARRAY_H
#define OP_3_ARRAY_H
#include <iostream>
#include <ctime>
using namespace std;

class Array {
private:
    int arr[100];
    int size;

public:
    Array(int size, int num[]);

    void Print();

    Array operator+(Array& other);

    bool operator==(Array& other);

    bool operator!=(Array& other);

    bool operator>(Array& other);

    bool operator<(Array& other);
};

#endif