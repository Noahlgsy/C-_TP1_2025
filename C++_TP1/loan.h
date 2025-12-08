#include "Reader.h"
#pragma once
class Loan
{
private: 
	Date d_loan; 
	int ISBN_Book; 
	int id_reader;
public:
	Loan(Date& _d, int _ISBN, int _id)
		: d_loan(_d), ISBN_Book(_ISBN), id_reader(_id) {}
		void verify(Book& b, int id); 
		void return_loan(Book& b, int id); 
};

