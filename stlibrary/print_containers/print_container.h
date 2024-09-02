#pragma once
#include <iostream>
#include <iterator>

template <typename Type>
void print_container( Type& v){
//    copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, ", "));
    for(const auto& it: v){
        std::cout<< it<< ' ';
    }
    std::cout<<std::endl;
}
