#include "iter.hpp"

int main(void)
{
	int array[] = {1, 5, 5, 4, 6};
	iter(array, 5, print);

	std::cout << std::endl;
	
	iter(array, 5, print_plus);
	
	std::cout << std::endl << array[1] << std::endl;

	std::cout << "===========================" << std::endl;

	const char text[] = {'a','b','c','d','e','f','g','h','i'};
	iter(text, 9, print);

	//std::cout << "===========================" << std::endl;
//
	//const char text[] = {'a','b','c','d','e','f','g','h','i'};
	//iter(text, 9, print_plus);
}