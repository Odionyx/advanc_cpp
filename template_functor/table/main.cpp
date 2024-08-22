#include <iostream>
#include "my_matrix.h"


int main( int argc, char** argv){
//    std::cout << "Hello World!" << std::endl;
    try {
        auto test = MatriXX<uint32_t>(3, 4);
        test[0][0] = 4;
        std::cout << test[0][0]<< std::endl;
        std::cout << test.size()<< std::endl;
        test.print();
    } catch (const std::exception& ex){
        std::cerr<< __FUNCTION__<<' '<< ex.what()<< std::endl;
    } catch (...){
        std::cerr<< __func__<< std::endl;
    }
    return 0;
}
