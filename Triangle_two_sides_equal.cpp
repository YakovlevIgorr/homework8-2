//
// Created by Macbook on 30.08.2023.
//

#include "Triangle_two_sides_equal.h"

/////    Равнобедренный треугольник:-> Равносторонний треугольник

    Triangle_two_sides_equal::Triangle_two_sides_equal(int a, int b, int A, int B, int C):
            Triangle(a, b, a, A, B, C){
        if(A != C && A != B && B != C){
            throw std::invalid_argument("Ошибка создания фигуры. Причина: два угла не равны");
        }
        set_data("Равнобедренный треугольник:",3);
    }

