#include <iostream>
#include <set>


int main( int argc, char** argv){
//    std::cout << "Hello World!" << std::endl;
    short int value{0};
    short int size{0};
    std::set <short, std::greater<short>> uniqueDecrease;

    std::cout<< "[IN]:"<< std::endl;
    std::cin>> size;
    for( int i{0}; i< size; ++i) {
        std::cin>> value;
        uniqueDecrease.insert(value);
    }
    std::cout<< std::endl;

    std::cout<< "[OUT]:"<< std::endl;
    for(auto it: uniqueDecrease){
        std::cout<< it<< std::endl;
    }
    std::cout<< std::endl;
    return 0;
}
