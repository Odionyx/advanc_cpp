#include "my_functor.h"

void MyFunctor::operator()(int value){
    if(( value%3)== 0) this-> count++;
    this->sum+= value;

}

int MyFunctor::get_count(){
    return count;
}

int MyFunctor::get_sum(){
    return sum;
}
