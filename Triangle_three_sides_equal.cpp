//
// Created by Macbook on 30.08.2023.
//

#include "Triangle_three_sides_equal.h"

///    Равносторонний треугольник:->Равнобедренный треугольник


    Triangle_three_sides_equal::Triangle_three_sides_equal(int a):
            Triangle_two_sides_equal(a, a, 40, 60, 60){

    if(A != 60 && B != 60 && C != 60){
        throw std::invalid_argument("Ошибка создания фигуры. Причина: один или несколько углов не равны 60");
    }
        set_data("Равносторонний треугольник:", 3);
    }

