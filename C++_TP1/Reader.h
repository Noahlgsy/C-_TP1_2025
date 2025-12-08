#include <string>
#include "Book.h"

#pragma once
class Reader
{
private:
	int id;
	std::string name;
	std::string surname;
	//std::vector<int> ISBN_tab;
public:
	Reader(int _id, std::string _name, std::string _surname)//, std::vector<int> _ISBN_tab)
		: id(_id), name(_name), surname(_surname) {}//, ISBN_tab(_ISBN_tab) {}
	int get_id() const { return id;  }

}; 