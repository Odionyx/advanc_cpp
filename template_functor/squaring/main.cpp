#include "my_square.h"

#include <iostream>
#include <vector>


int main( int argc, char** argv){
    int val = 4;
    std::cout<< my_squere(val)<< std::endl;

    std::vector<short> v = {-1, 4, 8};
    for (auto x : my_squere(v)) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}
