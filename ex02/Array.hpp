#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <typename T>
class Array
{
public:
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	Array &operator=(const Array &other);

	T &operator[](unsigned int i);
	const T& operator[](unsigned int i) const;

	~Array();

	unsigned int size() const;

private:
	T *_data;
	unsigned int _size;
};
// std::ostream &operator<<(std::ostream &os, const Array &Array);

#include "Array.tpp"

#endif