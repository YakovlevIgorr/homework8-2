//
// Created by Macbook on 29.08.2023.
//

#pragma once
#include <string>
class Figure{
protected:
    std::string figure;
    int sides;
    std::string space = "\n";
public:
    Figure();
    virtual bool check();
    virtual void print_info();
    void set_data(std::string, int);

};
