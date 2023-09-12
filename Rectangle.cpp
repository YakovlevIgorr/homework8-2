//
// Created by Macbook on 30.08.2023.
//

#include "Rectangle.h"

///Прямоугольник:параллелограмм


    Rectangle::Rectangle(int a, int b, int c, int d, int A, int B):
    Parallelogram(a, b, c, d,  A, B, A, B){

    if(A != 90 && B != 90){
        throw std::invalid_argument("Ошибка создания фигуры. Причина: Углы не равны");
    }
        set_data("Прямоугольник:");
    }


