#ifndef SMART_ARRAY_H
#define SMART_ARRAY_H

class smart_array {
public:
    int size();
    void add_element(short int value);
    int& get_element(short int value); // Tоже что и operator[].

    int& operator[](short int value);
    smart_array& operator= (const smart_array& right); // Копирующее =.
    smart_array& operator= (smart_array&&)= default;  // Перемещающее =.

    smart_array(const smart_array& right); // Копирующий конструктор.
    smart_array(smart_array&&)= default;  // Перемещающий конструктор.                  //Перемещающий конструктор
    smart_array(short int value);
    smart_array();
    ~smart_array();
private:
    int* arr;
    short int count;
    short int elem;
};

#endif // SMART_ARRAY_H
