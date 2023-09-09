//
// Created by Macbook on 29.08.2023.
//

#pragma once
#include "figure.h"
class Triangle:public Figure{
protected:
    int a, b, c;
    int A, B, C;
public:
    Triangle(int, int, int, int, int, int);
    bool check() override;
    void print_info() override;
};