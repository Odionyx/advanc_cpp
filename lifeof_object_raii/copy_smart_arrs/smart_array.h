#ifndef SMART_ARRAY_H
#define SMART_ARRAY_H

class smart_array {
public:
    int size();
    void add_element(short int i);
    int& get_element(short int i);                          //тоже что и operator[]

    int& operator[](short int i);
    smart_array& operator= (const smart_array& a);          //Копирующее присваивание
    smart_array& operator= (smart_array&&)= default;        //Перемещающее присваивание

    smart_array(const smart_array &a);                      //Копирующий конструктор
    smart_array(smart_array&&)= default;                    //Перемещающий конструктор
    smart_array(short int i);
    smart_array();
    ~smart_array();
private:
    int* arr{nullptr};
    short int elem{0}, count{0};
};

#endif // SMART_ARRAY_H
