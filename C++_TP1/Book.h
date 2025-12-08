#include <string>
#include "Date.h"


#pragma once

class Book
{
private: 
	std::string title; 
	std::string author; 
	std::string language; 
	std::string gender; 
	int ISBN; 
	int id; 
	Date d; // Add the missing member variable for Date

public: 
	Book(std::string _title, std::string _author, std::string _language, std::string _gender, int _ISBN, int _id, Date& _d)
		: title(_title), author(_author), language(_language), gender(_gender), ISBN(_ISBN), id(_id), d(_d) {}
	std::string get_title() { return title; }
	std::string get_author() { return author; }
	std::string get_language() { return language; }
	std::string get_gender() { return gender; }
	int get_ISBN() { return ISBN;  }
	int get_id() { return id; }
	Date get_Date() { return d;  }
	

	

    
};
