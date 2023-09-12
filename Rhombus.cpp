//
// Created by Macbook on 30.08.2023.
//

#include "Rhombus.h"

///    Ромб:->параллелограмм->квадрат


    Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D):
    Parallelogram(a, b, c, d, A, B, C, D){
    if(a != b && b != c && c != d){
        throw std::invalid_argument("Ошибка создания фигуры. Причина: стороны не равны");
    }
    if(A != C && B != D){
        throw std::invalid_argument("Ошибка создания фигуры. Причина: противоположные углы не равны");
    }
        set_data("Ромб:");
    }

