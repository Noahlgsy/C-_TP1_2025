#include "Date.h"
#include <string>

#pragma once
class Author
{
private: 
	std::string name; 
	std::string surname; 
	int id; 
	Date d; 
public: 
	Author(std::string _name, std::string _surname, int _id, Date& _d)
		: name(_name), surname(_surname), id(_id), d(_d) {}

};

