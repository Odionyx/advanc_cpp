#include <iostream>
#include "smart_array.h"
using namespace std;

int main( int argc, char** argv){
//    cout << "Hello World!" << endl;
    try {
        smart_array arr(5);
        arr.add_element(1);
        arr.add_element(4);
        arr.add_element(155);

        smart_array new_array(2);
        new_array.add_element(44);
        new_array.add_element(34);

        arr = new_array;
        for( short s{0}; s< arr.size(); ++s){
            cout<< arr[s]<< endl;
        }
    } catch (exception& ex) {
        cerr<< ex.what()<< endl;
    }

    return 0;
}
