#ifndef MYFUNCTOR_H
#define MYFUNCTOR_H

#include <vector>

class MyFunctor{
public:
    void operator()(int value);
    int get_count();
    int get_sum();

    MyFunctor()= default;
    ~MyFunctor()= default;
private:
    std::vector<int> vec;
    int count{0};
    int sum{0};
};

#endif // MYFUNCTOR_H
