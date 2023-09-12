//
// Created by Macbook on 29.08.2023.
//


#include <iostream>
#include "Triangle.h"



/////    Треугольник:-> Прямоугольный треугольник


    Triangle::Triangle(int a, int b, int c, int A, int B, int C){
        if ((A + B + C) != 180) {
            throw std::invalid_argument("Ошибка создания фигуры. Причина: сумма углов не равна 180");
        }
        this->a = a, this->b = b, this->c = c;
        this->A = A, this->B = B, this->C = C;
        set_data("Треугольник", 3);
    }



    void Triangle::print_info() {
        std::cout << figure << " (стороны " << a << ", " << b << ", " << c << ";";
        std::cout << " углы " << A << ", " << B << ", " << C << ") создан\n";

    }
    void Triangle::set_data(std::string figure, int sides){
        this->figure = figure;
    //this->sides = sides;

}