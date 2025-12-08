#include <iostream>
#include "loan.h"
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
	Book b1("The beginning of the hero", a1, "English", "Fantastic", 1, id_readers, d_publication, 1); 

	//Creation of a Loan 
	//Date of the loan must be after the back date of a book so after the back loan
	//delay of 10 days after the loan to get bakc the book 
	Date d_loan1(24, 11, 2025); 
	Loan l1(d_loan1, b1.get_ISBN(), r2.get_id());
	l1.verify(b1); 
	Date d_loan2(25, 11, 2025); 
	Loan l2(d_loan2, b1.get_ISBN(), r3.get_id()); 
	l2.verify(b1); 

	return 0; 
}