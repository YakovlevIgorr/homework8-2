//
// Created by Macbook on 30.08.2023.
//

#include "Parallelogram.h"

///    Параллелограмм:->четырехугольник->прямоугольник


    Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D):
            Quadrangle(a,b,c,d,A,B,C,D){
    if(a != c || b != d){
        throw std::invalid_argument("Ошибка создания фигуры. Причина: Противоположные стороны не равны");
    }
    if(A != C){
        throw std::invalid_argument("Ошибка создания фигуры. Причина: Противоположные углы не равны");
    }
        set_data("Параллелограмм:");
    }
