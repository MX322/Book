#pragma once
#include <iostream>

class Book
{
private:
	std::string author;
	std::string name;
	std::string publ_office;
	int year;
	int pages;

public:
	explicit Book(std::string _author, std::string _name, std::string _publ_office, int _year, int _pages);
	
	void ShowAuthor(std::string author) const;

	void ShowPublOffice(std::string publ_office) const;

	void ShowYear(int year) const;

};


