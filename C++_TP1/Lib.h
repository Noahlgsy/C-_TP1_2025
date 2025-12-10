#include "loan.h"
#pragma once
class Lib
{
private: 
	std::vector<Book> lib_Book; 
	//std::vector<Loan> lib_Loan;
	std::vector<Author> lib_Author;
	std::vector<Reader> lib_Reader;

public: 
	Lib(std::vector<Book> _libb, std::vector<Author> _liba, std::vector<Reader> _libr )
		: lib_Book(_libb), lib_Author(_liba), lib_Reader(_libr) {}
	std::vector<Book> get_lib_Book() const { return lib_Book;  }
	std::vector<Author> get_lib_Author() const { return lib_Author; }
	std::vector<Reader> get_lib_Reader() const { return lib_Reader; }
	void set_lib_Book(Book& b) { lib_Book.push_back(b); }  //ajouter des livres a la biblio
	void set_lib_Book(Author& a) { lib_Author.push_back(a); }
	void set_lib_Book(Reader& r) { lib_Reader.push_back(r); }
	void lib_Loan(Book& b, Reader& r, Date& d); 
	void lib_reLoan(Book& b, Reader& r, Date& d); 
	std::vector<Book> find_author_book(const Author& a); 

};

