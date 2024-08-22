#pragma once

#include <iostream>
#include <vector>
#include <exception>


template <class Type>
class MatriXX{
public:
    class MatriYY{
    public:
        std::size_t size() const{
            return arrY.size();
        }
        Type& operator[]( std::size_t index){
            if(( index< 0)||( index>= arrY.size()))
                throw std::out_of_range ("Array Index out of Bounds");
            return arrY[ index ];
        }
        MatriYY( std::size_t size){
            for( std::size_t i{0}; i< size; ++i)
                arrY.push_back(0.0);
        }
        MatriYY( void)= default;
        ~MatriYY()= default;
    private:
        std::vector< Type> arrY;
    };
    MatriYY& operator[]( std::size_t index){
        if(( index< 0)||( index>= arrX.size()))
            throw std::out_of_range ("Array Index out of Bounds");
        return arrX[ index];
    }
    const Type& operator[]( const std::size_t index) const{
        if(( index< 0)||( index>= arrX.size()))
            throw std::out_of_range ("Array Index out of Bounds");
        return arrX[ index];
    }

    void print(){
        for ( std::size_t i{0}; i< arrX.size(); ++i ){
            for ( std::size_t j{0}; j< arrX[i].size(); ++j )
                std::cout<< arrX[i][j]<< ' ';
            std::cout<< std::endl;
        }
        std::cout<< std::endl;
    }
    std::size_t size() const{
        return (xSize * ySize);
    }
    MatriXX( std::size_t rows, std::size_t cols)
        : xSize{ rows}, ySize{ cols}{
        MatriYY m( cols);
        for( std::size_t i{0}; i< rows; ++i)
            arrX.push_back(m);
    }
    ~MatriXX()= default;
private:
    std::vector< MatriYY> arrX;
    std::size_t xSize{0};
    std::size_t ySize{0};
};

//    const char& operator[](std::size_t position) const{.
//    ... // выполнить проверку границ массива.
//    ... // протоколировать доступ к данным.
//    ... // проверить целостность данных.
//        return text[position];.
//    }.
//    char& operator[](std::size_t position) const{ // теперь вызываем const op[].
//        return.
//                const_cast( // из возвращаемого типа.
//                            // op[] исключить const.
//                            static_cast(*this) // добавить const типу.
//                            // *this.
//                            [position] // вызвать константную.
//                            ); // версию op[].
//    }. // Скотт Майерс.
