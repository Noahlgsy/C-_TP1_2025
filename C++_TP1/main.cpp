#include <iostream>
#include "Book.h"

int main()
{
	std::cout << "Hello, world !" << std::endl; 
	Date d1(13, 12, 2025); 
	Book b1("The_best_arbeiter", "Noah Luangsay", "French", "Fantastic", 123456789, 6789, d1); 
	return 0; 
}