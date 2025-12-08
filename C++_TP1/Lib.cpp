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