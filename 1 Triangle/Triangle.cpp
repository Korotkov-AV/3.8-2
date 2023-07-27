#include "Triangle.h"


 Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
     if (a < 1 || b < 1 || c < 1 || A < 1 || B < 1 || C < 1) throw error("Объект не создан ->\nВведен параметр <0!");
     if (A + B + C != 180) throw error("Объект не создан ->\nCумма углов не равна 180!");
         name = "Треугольник: ";
         this->a = a;
         this->b = b;
         this->c = c;
         this->A = A;
         this->B = B;
         this->C = C;
 }


     void Triangle :: print() {
         std::cout << "Объект создан ->\n";
         std::cout << name << "\nСтороны: a=" << a << " b=" << b << " c=" << c;
        std::cout << "\nУглы: A=" << A << " B=" << B << " C=" << C << "\n\n";
     }