#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

class Array {
public:
    Array();
    Array(unsigned int n);

    Array(const Array& other);
    Array& operator=(const Array& other);
    ~Array();

private:
    
};
std::ostream &operator<<(std::ostream &os, const Array &Array);

#endif