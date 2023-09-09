//
// Created by Macbook on 29.08.2023.
//
#include <iostream>
#include "figure.h"
//#include <exception>
//std::exception	added;

    Figure::Figure(){
        this->figure = "Фигура: ";
        this->sides = 0;
    }

    bool Figure::check(){
        if(sides == 0) {
            space = "\n\n";
            return true;
        }else Error("Слишком много сторон");
        return false;
    }

    void Figure::print_info(){
        bool right_or_not = check();


//        std::cout << figure << "\n" << (right_or_not? "Правильная\n": "Неправильная\n")
//                  << "Количество сторон: " << this->sides << space;
}

    void Figure::set_data(std::string figure, int sides){
        this->figure = figure;
        this->sides = sides;

}
