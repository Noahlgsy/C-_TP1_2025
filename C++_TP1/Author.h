#include "Date.h"
#include <string>

#pragma once
class Author
{
private: 
	std::string name; 
	std::string surname; 
	int id; 
	Date d_birth; 
public: 
	Author(std::string _name, std::string _surname, int _id, Date& _d)
		: name(_name), surname(_surname), id(_id), d_birth(_d) {}
	std::string get_name() const { return name;  }
	std::string get_surname() const { return surname;  }
	int get_id() const { return id;  }
	Date get_date() const { return d_birth; }
	friend std::ostream& operator<<(std::ostream& os, const Author& a); 

};


