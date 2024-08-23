#pragma once

#include <iostream>
#include <vector>
#include <exception>


template <class Type>
class Matrix{
public:
    std::vector<Type>& operator[]( const std::size_t index){
        if(( index< 0)||( index>= arrX.size()))
            throw std::out_of_range ("Array Index out of Bounds");
        return arrX.at(index);
    }
    const std::vector<Type>& operator[]( const std::size_t index) const{
        if(( index< 0)||( index>= arrX.size()))
            throw std::out_of_range ("Array Index out of Bounds");
        return arrX.at(index);
    }
//    void print(){
//        for ( std::size_t i{0}; i< arrX.size(); ++i ){
//            for ( std::size_t j{0}; j< arrX[i].size(); ++j )
//                std::cout<< arrX[i][j]<< ' ';
//            std::cout<< std::endl;
//        }
//        std::cout<< std::endl;
//    }
    std::size_t size() const{
        return (arrX.size()* arrY.size());
    }
    Matrix( std::size_t rows, std::size_t cols){
        for( std::size_t i{0}; i< cols; ++i)
            arrY.push_back(0.0);
        for( std::size_t i{0}; i< rows; ++i)
            arrX.push_back(arrY);
    }
    Matrix()= default;
    ~Matrix()= default;
private:
    std::vector< std::vector<Type>> arrX;
    std::vector< Type> arrY;
};
