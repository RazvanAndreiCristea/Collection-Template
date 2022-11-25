#pragma once
#include <iostream>

class Moneda
{
	int valoare;
	int anFabricare;

public:

	Moneda();

	Moneda(const int, const int);

	int getValoare() const;

	bool operator<(const Moneda&);

	friend std::istream& operator>>(std::istream&, Moneda&);

	friend std::ostream& operator<<(std::ostream&, const Moneda&);
};