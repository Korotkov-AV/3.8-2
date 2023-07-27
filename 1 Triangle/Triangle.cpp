#include "Triangle.h"


 Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
     if (a < 1 || b < 1 || c < 1 || A < 1 || B < 1 || C < 1) throw error("������ �� ������ ->\n������ �������� <0!");
     if (A + B + C != 180) throw error("������ �� ������ ->\nC���� ����� �� ����� 180!");
         name = "�����������: ";
         this->a = a;
         this->b = b;
         this->c = c;
         this->A = A;
         this->B = B;
         this->C = C;
 }


     void Triangle :: print() {
         std::cout << "������ ������ ->\n";
         std::cout << name << "\n�������: a=" << a << " b=" << b << " c=" << c;
        std::cout << "\n����: A=" << A << " B=" << B << " C=" << C << "\n\n";
     }