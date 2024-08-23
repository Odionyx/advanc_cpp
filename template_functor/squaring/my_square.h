#pragma once

#include <iostream>
#include <vector>
#include <algorithm>


template <typename T>
T& my_squere( T& x){
    return( x*= x);
};

template <typename T>
std::vector< T>& my_squere( std::vector< T>& v){
    std::for_each( v.begin(), v.end(),
                  [&]( T& x){ x*= x;});
    return v;
};
