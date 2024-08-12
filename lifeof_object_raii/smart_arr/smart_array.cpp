#include "smart_array.h"
#include <iostream>

int smart_array::size(){ return elem;}

void smart_array::add_element(short i){
    if(count< size()){
        this->arr[count]= i;
        this->count++;
    } else throw std::out_of_range{"smart_array add_element..."};
}

int& smart_array::get_element(short i){
    if( i< 0|| size()<= i)
        throw std::out_of_range{"smart_array get_element..."};
    return arr[i];
}

int& smart_array::operator[](short i){
    if( i< 0|| size()<= i)
        throw std::out_of_range{"smart_array operator[]..."};
    return arr[i];
}

smart_array::smart_array(short i): arr{ new int[i]}, elem{i}{
//    std::cout<< __FUNCTION__<< std::endl;
    if( i< 0)
        throw std::length_error{ "smart_array: bad size!"};
}

smart_array::smart_array(): arr{nullptr}, elem{0}{
//    std::cout<< __FUNCTION__<< std::endl;
}

smart_array::~smart_array(){
//    std::cout<< __FUNCTION__<< std::endl;
    delete[] arr;
    arr= nullptr;
}
