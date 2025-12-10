#include "Date.h"

std::ostream& operator<<(std::ostream& os, const Date& d)
{
	os << d.get_day() << "/" << d.get_month() << "/" << d.get_year();
	return os;
}
