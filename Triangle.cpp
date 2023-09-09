//
// Created by Macbook on 29.08.2023.
//


#include <iostream>
#include "Triangle.h"


/////    Треугольник:-> Прямоугольный треугольник


    Triangle::Triangle(int a, int b, int c, int A, int B, int C){

        this->a = a, this->b = b, this->c = c;
        this->A = A, this->B = B, this->C = C;
        set_data("Треугольник: ", 3);
    }

    bool Triangle::check(){// override{
        if(sides == 3) {
            if (a + b + c > 0 && A + B + C == 180) {
                return true;
            }else Error("Углы не равны 180");
        }
        return false;
    }

    void Triangle::print_info() {
        Figure::print_info();
        std::cout << "Стороны: a=" <<  a << " b=" << b << " c=" <<  c << "\n";
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n\n";
    }
