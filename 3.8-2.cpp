// 3.6-3.cpp основа из 3.5-2.cpp 

//#include <iostream>
//#include <Windows.h>
//#include <string>
#include "1 Triangle/Triangle.h"
#include "2 Triangle_p/Triangle_p.h"
#include "3 Triangle_rb/Triangle_rb.h"
#include "4 Triangle_rs/Triangle_rs.h"
#include "5 Quadrangle/Quadrangle.h"
#include "5 Quadrangle/5.1 Quadrangle_p/Quadrangle_p.h"
#include "5 Quadrangle/5.1 Quadrangle_p/5.1.1 Quadrangle_r/Quadrangle_r.h"
#include "5 Quadrangle/5.1 Quadrangle_p/5.1.2 Quadrangle_par/Quadrangle_par.h"
#include "5 Quadrangle/5.1 Quadrangle_p/5.1.2 Quadrangle_par/5.1.2.1 Quadrangle_kv/Quadrangle_kv.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    try {
        Triangle t(10, 20, 30, 40, 40, 110);
        t.print();
    }
    catch (const error& exception) {
        std::cout << exception.what() << "\n\n";
    }
    try {
        Triangle_p t_p(10, 20, 30, 190);
        t_p.print();
    }
    catch (const error& exception) {
        std::cout << exception.what() << "\n\n";
    }
    try {
        Triangle_rb rb(20, 30, -40);
        rb.print();
    }
    catch (const error& exception) {
        std::cout << exception.what() << "\n\n";
    }
    try {
        Triangle_rs rs(40);
        rs.print();
    }
    catch (const error& exception) {
        std::cout << exception.what() << "\n\n";
    }
    try {
        Quadrangle q(10, 20, 30, 40, 40, 30, 110, 12);
        q.print();
    }
    catch (const error& exception) {
        std::cout << exception.what() << "\n\n";
    }
    try {
        Quadrangle_p p(20, 30, 30, 400);
        p.print();
    }
    catch (const error& exception) {
        std::cout << exception.what() << "\n\n";
    }
    try {
        Quadrangle_r r(30, 30, 110);
        r.print();
    }
    catch (const error& exception) {
        std::cout << exception.what() << "\n\n";
    }
    try {
        Quadrangle_par par(30, 50);
        par.print();
    }
    catch (const error& exception) {
        std::cout << exception.what() << "\n\n";
    }
    try {
        Quadrangle_kv kv(50);
        kv.print();
    }
    catch (const error& exception) {
        std::cout << exception.what() << "\n\n";
    }

    std::cout << "Конец файла!\n";
    return 0;
}

