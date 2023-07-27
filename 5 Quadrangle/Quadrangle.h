#pragma once
#include "../1 Triangle/Triangle.h"

class Quadrangle {
public:
    std::string name;
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;
    int d;
    int D;
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);

    virtual void print();
};