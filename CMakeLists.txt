cmake_minimum_required(VERSION 3.25)
project(lesson6_3)

set(CMAKE_CXX_STANDARD 17)

add_executable(lesson6_3 main.cpp figure.h figure.cpp Triangle.h Triangle.cpp rectangle_triangle.h rectangle_triangle.cpp Triangle_two_sides_equal.cpp Triangle_two_sides_equal.h Triangle_three_sides_equal.cpp Triangle_three_sides_equal.h Quadrangle.cpp Quadrangle.h Parallelogram.cpp Parallelogram.h Rectangle.cpp Rectangle.h Rhombus.cpp Rhombus.h Square.cpp Square.h figure.cpp Error.cpp Error.h)
