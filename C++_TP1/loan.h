#include "Book.h"
#pragma once
class Loan
{
private: 
	Date d1; 
	int ISBN_Book; 
	int id_reader;
public:
	Loan(Date& _d1, int _ISBN, int _id)
		: d1(_d1), ISBN_Book(_ISBN), id_reader(_id) {}

};

