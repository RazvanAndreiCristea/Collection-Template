#pragma once
#include <iostream>
#include <string>
#pragma warning (disable : 4996)
#pragma warning (disable : 6031)

class Fotografie
{
	double lungime;
	double latime;
	char* dataRealizareFotografie;

public: 

	Fotografie();

	Fotografie(const double, const double, const char*);

	Fotografie(const Fotografie&);

	~Fotografie();

	Fotografie& operator=(const Fotografie&);

	double getLungime() const;

	bool operator<(const Fotografie&);

	friend std::istream& operator>>(std::istream&, Fotografie&);

	friend std::ostream& operator<<(std::ostream&, const Fotografie&);
};