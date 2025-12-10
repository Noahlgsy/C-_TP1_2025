#include "Reader.h"

std::ostream& operator<<(std::ostream& os, const Reader& r)
{
	os << "His name is :" << r.get_name() << "\n" << "His family name is :" << r.get_surname() << "\n" << "His id is : " << r.get_id(); 
	return os; 
}