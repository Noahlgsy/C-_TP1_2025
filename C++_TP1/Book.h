#include <string>
#include <vector>
#include "Date.h"
#include "Author.h"

#pragma once

class Book
{
private: 
	std::string title; 
	Author author; 
	std::string language; 
	std::string gender; 
	int ISBN; 
	std::vector<int> id_reader; 
	Date d; // Add the missing member variable for Date
	int take; 

public: 
	Book(std::string _title, Author& _author, std::string _language, std::string _gender, int _ISBN, std::vector<int> _id, Date& _d, int _take)
		: title(_title), author(_author), language(_language), gender(_gender), ISBN(_ISBN), id_reader(_id), d(_d), take(_take) {}
	Book() = default; 
	std::string get_title() const { return title; }
	Author get_author() const { return author; }
	std::string get_language() const { return language; }
	std::string get_gender() const { return gender; }
	int get_ISBN() const { return ISBN;  }
	std::vector<int> get_id() const { return id_reader; }
	Date get_Date() const { return d;  }
	int get_take() const { return take; }
	void set_take(int new_take) { take = new_take; }
	void set_id_readers(int id) { id_reader.push_back(id); }
	friend std::ostream& operator<<(std::ostream& os, Book& b); 


};
