#include <iostream>

struct Point{
    double m_x{0};
    double m_y{0};
};

void printPoint(const Point& point_object) {
    std::cout<< "x:"<< point_object.m_x<< ", y: "
        << point_object.m_y << std::endl;
}

int main( int argc, char** argv){
    Point my_point;
    for (int i = 0; i < 5; ++i){
        my_point.m_x= i;
        my_point.m_y= i*2;
        printPoint(my_point);
    }
    return 0;
}
    // Thanks for the tutorial!
