//
// Created by Macbook on 30.08.2023.
//

#pragma once
#include <string>
#include <iostream>
class Quadrangle{
protected:
    int a, b, c, d;
    int A, B, C, D;
    std::string figure;
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    void print_info();// override;
    virtual void set_data(std::string);
};
