#include <iostream>
#include "my_matrix.h"


int main( int argc, char** argv){
//    std::cout << "Hello World!" << std::endl;
    try {
        const int i = 4;
        auto test = Matrix<int>(3, 4);
        test[0][0] = 4;
        // ...test[][границы не проверяет!!!] незнаю как решить...
        std::cout << test[0][0]<< std::endl<< std::endl;
        std::cout << test.size()<< std::endl<< std::endl;
//        test.print();
    } catch (const std::exception& ex){
        std::cerr<< __FUNCTION__<<' '<< ex.what()<< std::endl;
    } catch (...){
        std::cerr<< __func__<< std::endl;
    }
    return 0;
}
