#pragma once

#include <iostream>
#include <Windows.h>
#include <string>
#include "../6 Exception/error.h"

class Triangle {
public:
    
    
    std::string name;
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;

    Triangle(int a, int b, int c, int A, int B, int C);
     
    virtual void print();
};