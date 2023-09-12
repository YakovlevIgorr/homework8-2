//
// Created by Macbook on 30.08.2023.
//
#include <iostream>
#include "Quadrangle.h"

    ///    Четырёхугольник:->параллелограмм




    Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D){
    if((A + B + C + D) != 360){
        throw std::invalid_argument("Ошибка создания фигуры. Причина: сумма углов не равна 360");
    }
        this->a = a, this->b = b, this->c = c, this->d = d;
        this->A = A, this->B = B, this->C = C, this->D = D;
        set_data("Четырёхугольник:");
    }

void Quadrangle::set_data(std::string figure){
    this->figure = figure;


}
void Quadrangle::print_info() {

        std::cout << figure << " (стороны " << a << ", " << b << ", " << c << ", " << d << ";";
        std::cout << " углы " << A << ", " << B << ", " << C << ", " << D << ") создан\n";
}


//    void Quadrangle::set_data(std::string figure){
//        this->figure = figure;
//    //this->sides = sides;
//
//}


