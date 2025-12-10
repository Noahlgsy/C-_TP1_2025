#include "Author.h"

std::ostream& operator<<(std::ostream& os, const Author& a)
{
	os << "Name : " << a.name << "\n" << "Surname : " << a.surname << "\n" << "Id: " << a.id << "\n" << "Birth : " << a.d_birth << "\n";
	return os; 
}
