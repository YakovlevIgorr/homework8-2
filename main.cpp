#include <iostream>
#include "Triangle_three_sides_equal.h"
#include "Square.h"

void print(Triangle& figure){
    figure.print_info();

}
void print2(Quadrangle figure){
    figure.print_info();
}

int main() {

//    try {
//        Figure figure;
//        print(figure);
//    }catch (const std::string& mist){
//        std::cout << &mist << std::endl;
//    }

    try {
        Triangle obj_triangle(10, 20, 30, 50, 60, 70);
        print(obj_triangle);
    }catch (const std::invalid_argument& mist){
        std::cout << mist.what() << std::endl;
    }catch(...){
        std::cout << "unknown error";
    }
    try {
        Rectangle_triangle obj_rectangle_triangle(10, 20, 30, 40, 60);
        print(obj_rectangle_triangle);
    }catch (const std::invalid_argument& mist){
        std::cout << mist.what() << std::endl;
    }catch(...){
        std::cout << "unknown error";
    }
//
    try {
        Rectangle_triangle obj_rectangle_triangle1(10, 20, 30, 50, 40);
        print(obj_rectangle_triangle1);
    }catch (const std::invalid_argument& mist){
        std::cout << mist.what() << std::endl;
    }catch(...){
        std::cout << "unknown error";
    }

//
    try {
        Triangle_two_sides_equal triangleTwoSidesEqual(10,20,50,40,90);
        print(triangleTwoSidesEqual);
    }catch (const std::invalid_argument& mist){
        std::cout << mist.what() << std::endl;
    }catch(...){
        std::cout << "unknown error";
    }
//
    try {
        Triangle_three_sides_equal triangleThreeSidesEqual(30);
        print(triangleThreeSidesEqual);
    }catch (const std::invalid_argument& mist){
        std::cout << mist.what() << std::endl;
    }catch(...){
        std::cout << "unknown error";
    }
    try {
        Quadrangle quadrangle(10,20,30,40,150,60,70,80);
        print2(quadrangle);
    }catch (const std::invalid_argument& mist){
        std::cout << mist.what() << std::endl;
    }catch(...){
        std::cout << "unknown error";
    }
    try {
        Parallelogram parallelogram(20,30,20,40, 130,50, 130, 50);
        print2(parallelogram);
    }catch (const std::invalid_argument& mist){
        std::cout << mist.what() << std::endl;
    }catch(...){
        std::cout << "unknown error";
    }
    try {
        Rectangle rectangle(30,40,30,40,90,90);
        print2(rectangle);
    }catch (const std::invalid_argument& mist){
        std::cout << mist.what() << std::endl;
    }catch(...){
        std::cout << "unknown error";
    }

    try {
        Rhombus rhombus(50,30,50,30,130,50,130,50);
        print2(rhombus);
    }catch (const std::invalid_argument& mist){
        std::cout << mist.what() << std::endl;
    }catch(...){
        std::cout << "unknown error";
    }
    try {
        Square square(40,40,40,40,90,160,90,20);
        print2(square);
    }catch (const std::invalid_argument& mist){
        std::cout << mist.what() << std::endl;
    }catch(...){
        std::cout << "unknown error";
    }
//
//
////
////
//

//    Rhombus rhombus(30,30,40);
//    print(rhombus);
//
//    Square square(20,90);
//    print(square);


    return 0;
}




// Square.cpp Square.h