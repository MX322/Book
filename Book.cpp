#include "Book.h"

Book::Book(std::string _author, std::string _name, std::string _publ_office, int _year, int _pages)
{
	this->author = _author;
	this->name = _name;
	this->publ_office = _publ_office;
	this->year = _year;
	this->pages = _pages;
}


void Book::ShowAuthor(std::string author) const
{
	if (this->author == author)
	{
		std::cout << this->name << std::endl;
	}
}


void Book::ShowPublOffice(std::string publ_office) const
{
	if (this->publ_office == publ_office)
	{
		std::cout << this->name << std::endl;
	}
}


void Book::ShowYear(int year) const
{
	if (this->year >= year)
	{
		std::cout << this->name << std::endl;
	}
}


int main()
{
	Book One{ "Oleg Piano", "Golden eyes", "Human CC", 2018, 790 };
	Book Two{ "Sofia Niko", "The way", "Human CC", 2020, 640 };
	Book Three{ "Oleg Piano", "No brain", "Freak CC", 2014, 810 };

	const int SIZE = 3;

	Book books[SIZE] = { One, Two, Three };

	std::cout << "Author: " << std::endl;
	for (int i = 0; i < SIZE; i++) // ShowAuthor
	{
		books[i].ShowAuthor("Oleg Piano");
	}

	std::cout << "\nPublic Office: " << std::endl;
	for (int i = 0; i < SIZE; i++) // ShowPublOffice
	{
		books[i].ShowPublOffice("Human CC");
	}

	std::cout << "\nShow Year: " << std::endl;
	for (int i = 0; i < SIZE; i++) // ShowYear
	{
		books[i].ShowYear(2016);
	}

}