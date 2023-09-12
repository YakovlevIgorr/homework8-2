//
// Created by Macbook on 29.08.2023.
//

#include "rectangle_triangle.h"

/////    Прямоугольный треугольник:-> Треугольник

    Rectangle_triangle::Rectangle_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
        if(C != 90) throw std::invalid_argument("Ошибка создания фигуры. Причина: ни один из углов не равен 90\n");
    set_data("Прямоугольный треугольник:", 3);

    }
