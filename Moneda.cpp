#include "Moneda.h"

Moneda::Moneda()
{
	valoare = 0;
	anFabricare = 0;
}

Moneda::Moneda(const int valoare, const int anFabricare)
{
	this->valoare = valoare;
	this->anFabricare = anFabricare;
}

int Moneda::getValoare() const
{
	return valoare;
}

bool Moneda::operator<(const Moneda& moneda)
{
	if (this->getValoare() < moneda.getValoare())
		return true;

	return false;
}

std::istream& operator>>(std::istream& intrare, Moneda& moneda)
{
	std::cout << "\nIntroduceti valoarea monedei: ";
	intrare >> moneda.valoare;

	std::cout << "Precizati un an de fabricare al acestei monede: ";
	intrare >> moneda.anFabricare;

	std::cout << "\n=======================================================================\n\n";

	return intrare;
}

std::ostream& operator<<(std::ostream& iesire, const Moneda& moneda)
{
	iesire << "\nValoarea monedei este: " << moneda.valoare<<'\n';
	iesire << "Anul de aparitie al acestei monede este: " << moneda.anFabricare << '\n';
	iesire << "\n=======================================================================\n\n";

	return iesire;
}