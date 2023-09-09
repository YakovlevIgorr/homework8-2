//
// Created by Macbook on 03.09.2023.
//
#include <iostream>
#include "Error.h"

Error::Error(std::string mistake){

    throw std::invalid_argument(mistake);
    //if(!check){
      //  throw std::invalid_argument("errror");
    //}
}



