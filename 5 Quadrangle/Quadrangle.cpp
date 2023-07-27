#include "Quadrangle.h"


Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
    if (a < 1 || b < 1 || c < 1 || A < 1 || B < 1 || C < 1 || D<1 || d<1) throw error("Объект не создан ->\nВведен параметр <0!");
    if (A+B+C+D!=360) throw error("Объект не создан ->\nCумма углов не равна 360!");
        name = "Четырёхугольник: ";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        this->d = d;
        this->D = D;
    }

 void Quadrangle :: print() {
     std::cout << "Объект создан ->\n";
        std::cout << name << "\nСтороны: a=" << a << " b=" << b << " c=" << c << " d=" << d;
        std::cout << "\nУглы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
    }
