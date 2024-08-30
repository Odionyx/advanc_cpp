#include "print_container.h"
#include <iostream>
#include <vector>
#include <list>
#include <set>


int main( int argc, char** argv){
//    std::cout << "Hello World!" << std::endl;
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set); // four one three two

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list); // one, two, three, four

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector); // one, two, three, four

    return 0;
}
