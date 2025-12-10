#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(const T *array, const size_t length, void (*func)(const T&))
{
	if (!array || length == 0 || !func)
		return ;
 	for (size_t i = 0; i < length; i++)
 		func(array[i]);
}

template <typename T>
void iter(T *array, const size_t length, void (*func)(T&))
{
	if (!array || length == 0 || !func)
		return ;
 	for (size_t i = 0; i < length; i++)
 		func(array[i]);
}

template <typename T>
void print(const T &arg)
{
	std::cout << arg << std::endl;
}

template <typename T>
void print_plus(T &arg)
{
	arg = 66;
	std::cout << static_cast<T>(arg + 1) << std::endl;
}

#endif