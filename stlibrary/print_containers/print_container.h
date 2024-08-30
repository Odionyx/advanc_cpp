#pragma once
#include <iostream>

template <typename Type>
void print_container( Type& v){
    for(const auto& it: v){
        std::cout<< it<< ' ';
    }
    std::cout<<std::endl;
}
