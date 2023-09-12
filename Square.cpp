//
// Created by Macbook on 30.08.2023.
//

#include "Square.h"

///   Квадрат:->ромб


    Square::Square(int a, int b, int c, int d, int A, int B, int C, int D):
        Rhombus(a, b, c, d, A, B, C, D){
    if(A != B && B != C && C != D){
        throw std::invalid_argument("Ошибка создания фигуры. Причина: углы не равны");
    }

        set_data("Квадрат:");
    }
//