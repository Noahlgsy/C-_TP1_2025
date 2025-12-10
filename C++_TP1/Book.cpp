#include "Book.h"

std::ostream& operator<<(std::ostream& os, Book& b)
{
	os << "Tile : " << b.title << "\n" << "Author : " << b.author << "\n" << "Language : " << b.language << "\n" << "Gender : " << b.gender << "\n" << "ISBN : " << b.ISBN << "\n" << "Date : " << b.d << "\n" << "Take (1 = no, 0 = yes) : " << b.take << "\n";
	return os;

}
		
