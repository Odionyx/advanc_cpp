#include <algorithm>
#include <iostream>
#include <vector>


void uniqueValue(std::vector<short>& v){
    std::sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
}


int main( int argc, char** argv){
//    cout << "Hello World!" << endl;
    std::vector< short> vec{ 1, 1, 2, 5, 6, 1, 2, 4};

    std::cout<< "[IN]:  ";
    for( const auto &it: vec)
        std::cout<< it<< ' ';
    std::cout<< std::endl;

    uniqueValue(vec);
    std::cout<< "[OUT]: ";
    for( const auto &it: vec)
        std::cout<< it<< ' ';
    std::cout<< std::endl;

    return 0;
}
