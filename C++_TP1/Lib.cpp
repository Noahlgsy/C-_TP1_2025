#include "Lib.h"


void Lib::lib_Loan(Book& b, Reader& r, Date& d)
{
	Loan l(d, b.get_ISBN(), r.get_id());
	l.verify(b, r.get_id());
}

void Lib::lib_reLoan(Book& b, Reader& r, Date& d)
{
	Loan l(d, b.get_ISBN(), r.get_id());
	l.return_loan(b, r.get_id()); 
}

std::vector<Book> Lib::find_author_book(const Author& a)
{
	std::vector<Book> resultat;
	for (const Book& b : lib_Book)
	{
		if (b.get_author().get_name() == a.get_name())
		{
			resultat.push_back(b); 
		}
	}
	return resultat; 
}

std::vector<Book> Lib::find_loan_book(const Reader& r)
{
	std::vector<Book> resultat; 
	for (const Book& b : lib_Book)
	{
		if (b.get_last_id() == r.get_id())
		{
			resultat.push_back(b); 
		}
	}
	return resultat; 
}