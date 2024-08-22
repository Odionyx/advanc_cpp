#include <iostream>
#include "my_functor.h"


int main( int argc, char** argv){
    std::cout << "Hello World!" << std::endl;
    MyFunctor mf;
    mf( 4);
    mf( 1);
    mf( 3);
    mf( 6);
    mf( 25);
    mf( 54);
    std::cout<< "get_sum() = "<< mf.get_sum()<< std::endl;
    std::cout<< "get_count() = "<< mf.get_count()<< std::endl;
    return 0;
}

/*
 * который подсчитывает сумму и количество чисел, делящихся на 3.
[OUT]: get_sum() = 63
[OUT]: get_count() = 3
*/
