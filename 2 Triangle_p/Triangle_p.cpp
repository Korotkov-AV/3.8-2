#include "Triangle_p.h"

    Triangle_p::Triangle_p(int a, int b, int c, int A) : Triangle(a, b, c, A, 90, 90 - A) {
            if (A>90) throw error("Объект не создан ->\nВы ввели угол > 90!");
            name = "Прямоугольный треугольник: ";
    }
