#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

template<class T>
T& my_squere(T& x){
    return (x*= x);
};

template<>
std::vector<int>& my_squere(std::vector<int>& x){
    std::for_each(x.begin(),x.end(),
                  [&]( int& x){ x*= x;});
    return x;
};
