#include <iostream>
#include "Book.h"
#include "reader.h"

int main()
{
	std::cout << "Hello, world !" << std::endl; 

	//Readers
	Reader r1(1, "jean", "franc"); 
	Reader r2(2, "lola", "franche"); 
	Reader r3(3, "gilles", "gras"); 

	//Author
	Date d1(19, 5, 1978); 
	Author a1("vareau", "langui", 5, d1); 
	Date d2(9, 5, 1970);
	Author a2("misri", "kadre", 6, d2);
	Date d3(6, 9, 1967);
	Author a3("shal", "lenvoi", 5, d3);

	//creation list of recent reader_id
	std::vector<int> id_readers = { r1.get_id(), r2.get_id(), r3.get_id() }; 

	//Creation of the Book
	Date d_publication(14, 12, 2022); 
	Book b1("The beginning of the hero", a1, "English", "Fantastic", 234567, id_readers, d_publication); 

	return 0; 
}