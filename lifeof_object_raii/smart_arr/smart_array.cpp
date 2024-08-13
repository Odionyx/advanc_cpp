#include "smart_array.h"
#include <iostream>

int smart_array::size(){ return elem;}

void smart_array::add_element(short value){
    if(count< size()){
        this->arr[count]= value;
        this->count++;
    } else throw std::out_of_range{"smart_array add_element..."};
}

int& smart_array::get_element(short value){
    if( value< 0|| size()<= value)
        throw std::out_of_range{"smart_array get_element..."};
    return arr[ value];
}

int& smart_array::operator[](short value){
    if( value< 0|| size()<= value)
        throw std::out_of_range{"smart_array operator[]..."};
    return arr[ value];
}

smart_array::smart_array(short value)
    : arr{ new int[value]}, elem{value}, count{0}{
//    std::cout<< __FUNCTION__<< std::endl;
    if( value< 0)
        throw std::length_error{ "smart_array: bad size!"};
}

smart_array::smart_array()
    : arr{nullptr}, elem{0}, count{0}{
//    std::cout<< __FUNCTION__<< std::endl;
}

smart_array::~smart_array(){
//    std::cout<< __FUNCTION__<< std::endl;
    delete[] arr;
    arr= nullptr;
}
