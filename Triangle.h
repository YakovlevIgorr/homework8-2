//
// Created by Macbook on 29.08.2023.
//

#pragma once
#include <string>
class Triangle{
protected:
    std::string figure;

protected:
    int a, b, c;
    int A, B, C;
public:
    Triangle(int, int, int, int, int, int);
    virtual void print_info();// override;
    void set_data(std::string, int);
};