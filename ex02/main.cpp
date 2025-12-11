#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 5
int main(int, char **)
{
	Array<int> numbers(MAX_VAL);
	int numb[MAX_VAL];

	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		numb[i] = MAX_VAL + i;
	}

	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = numb[i];
	}

	for (unsigned int i = 0; i < MAX_VAL; i++)
	{
		std::cout << numbers[i] << std::endl;
	}

	
}