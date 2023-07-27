#include "Quadrangle.h"


Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
    if (a < 1 || b < 1 || c < 1 || A < 1 || B < 1 || C < 1 || D<1 || d<1) throw error("������ �� ������ ->\n������ �������� <0!");
    if (A+B+C+D!=360) throw error("������ �� ������ ->\nC���� ����� �� ����� 360!");
        name = "��������������: ";
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
     std::cout << "������ ������ ->\n";
        std::cout << name << "\n�������: a=" << a << " b=" << b << " c=" << c << " d=" << d;
        std::cout << "\n����: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
    }
