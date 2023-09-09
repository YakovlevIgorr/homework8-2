#include <iostream>
#include "Triangle_three_sides_equal.h"
#include "Square.h"

void print(Figure& figure){
    figure.print_info();

}

int main() {

    try {
        Figure figure;
        print(figure);
    }catch (const std::invalid_argument& mist){
        std::cout << mist.what() << std::endl;
    }

    try {
        Triangle obj_triangle(10, 20, 30, 50, 60, 70);
        print(obj_triangle);
    }catch (const std::invalid_argument& mist){
        std::cout << mist.what() << std::endl;
    }

    Rectangle_triangle obj_rectangle_triangle(10, 20, 30, 50, 60);
    print(obj_rectangle_triangle);
//
    Rectangle_triangle obj_rectangle_triangle1(10,20,30,50,40);
    print(obj_rectangle_triangle1);
//
    Triangle_two_sides_equal triangleTwoSidesEqual(10,20,50,60,50);
    print(triangleTwoSidesEqual);
//
    Triangle_three_sides_equal triangleThreeSidesEqual(30);
    print(triangleThreeSidesEqual);

//
//
    Quadrangle quadrangle(10,20,30,40,50,60,70,80);
    print(quadrangle);
//
    Parallelogram parallelogram(20,30,30,40);
    print(parallelogram);

    Rectangle rectangle(10,20,90);
    print(rectangle);
//
    Rhombus rhombus(30,30,40);
    print(rhombus);

    Square square(20,90);
    print(square);


    return 0;
}

