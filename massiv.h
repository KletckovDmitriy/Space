#ifndef MASSIV_H
#define MASSIV_H

#include "number.h"

class Array
{

public:
    Array();
    Array(int);
    void ArrayChange(int);
    void SKO();
    void sorter();
    void input();
    void print();
private:
    int length;
    int numbe;
    number* array;
    number element;
    number Sum;
    number average;
    number SKONumber;
    number medSKO;
};

#endif // MASSIV_H
