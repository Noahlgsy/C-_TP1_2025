#include <iostream>
#include "Book.h"

int main()
{
	std::cout << "Hello, world !" << std::endl; 
	Date d1_book(13, 12, 2025); 
	Date d2_author(24, 8, 2006); 
	Author author("Luangsay", "Noah", 2012, d2_author); 
	Book b1("The_best_arbeiter", author, "French", "Fantastic", 123456789, 6789, d1_book); 
	return 0; 
}