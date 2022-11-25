#include "Fotografie.h"

Fotografie::Fotografie()
{
	lungime = 0;
	latime = 0;
	dataRealizareFotografie = nullptr;
}

Fotografie::Fotografie(const double lungime, const double latime, const char* dataRealizareFotografie)
{
	this->lungime = lungime;
	this->latime = latime;

	if (dataRealizareFotografie != nullptr)
	{
		this->dataRealizareFotografie = new char[strlen(dataRealizareFotografie) + 1];
		strcpy(this->dataRealizareFotografie, dataRealizareFotografie);
	}
}

Fotografie::Fotografie(const Fotografie& fotografie)
{
	this->lungime = fotografie.lungime;
	this->latime = fotografie.latime;

	if (fotografie.dataRealizareFotografie != nullptr)
	{
		this->dataRealizareFotografie = new char[strlen(fotografie.dataRealizareFotografie) + 1];
		strcpy(this->dataRealizareFotografie, fotografie.dataRealizareFotografie);
	}
}

Fotografie::~Fotografie()
{
	if (dataRealizareFotografie != nullptr)
		delete[] dataRealizareFotografie;
}

Fotografie& Fotografie::operator=(const Fotografie& fotografie)
{
	if (this != &fotografie)
	{
		this->lungime = fotografie.lungime;
		this->latime = fotografie.latime;

		if (dataRealizareFotografie != nullptr)
			delete[] dataRealizareFotografie;

		if (fotografie.dataRealizareFotografie != nullptr)
		{
			this->dataRealizareFotografie = new char[strlen(fotografie.dataRealizareFotografie) + 1];
			strcpy(this->dataRealizareFotografie, fotografie.dataRealizareFotografie);
		}
	}

	return *this;
}

double Fotografie::getLungime() const
{
	return lungime;
}

bool Fotografie::operator<(const Fotografie& fotografie)
{
	if (this->getLungime() < fotografie.getLungime())
		return true;

	return false;
}

std::istream& operator>>(std::istream& intrare, Fotografie& fotografie)
{
	std::cout << "\nIntroduceti lungimea fotografiei: ";
	intrare >> fotografie.lungime;

	std::cout << "Introduceti latimea fotografiei: ";
	intrare >> fotografie.latime;

	char* aux = new char[50];

	std::cout << "Introduceti o data calendaristica: ";

	std::cin.ignore();
	std::cin.get(aux, 50);

	if (fotografie.dataRealizareFotografie != nullptr)
		delete[] fotografie.dataRealizareFotografie;

	fotografie.dataRealizareFotografie = new char[strlen(aux) + 1];
	strcpy(fotografie.dataRealizareFotografie, aux);

	std::cout << "\n=======================================================================\n\n";

	delete[] aux;

	return intrare;
}

std::ostream& operator<<(std::ostream& iesire, const Fotografie& fotografie)
{
	iesire << "\nLungimea fotografiei este: " << fotografie.lungime << '\n';
	iesire << "Latimea fotografiei este: " << fotografie.latime << '\n';
	iesire << "Data la care a fost facuta fotografia este: " << fotografie.dataRealizareFotografie << '\n';
	
	iesire << "\n=======================================================================\n\n";

	return iesire;
}