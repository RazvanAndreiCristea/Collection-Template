#include "Colectionar.h"

int main()
{
	int vectorIntregi[10], n(0);

	std::cout << "Dimensiunea vectorului de intregi este: ";
	std::cin >> n;

	for (auto j = 0; j < n; j++)
	{
		std::cout << "vectorIntregi [" << j << "] = ";
		std::cin >> vectorIntregi[j];
	}

	std::cout << "\n\nColectia de numere intregi nesortata va aparea mai jos! \n";

	Colectionar<int> colectionarIntregi(n, vectorIntregi);

	colectionarIntregi.print();
	colectionarIntregi.sort();

	std::cout << "Colectia de numere intregi sortata va aparea mai jos! \n";
	colectionarIntregi.print();

	double vectorReali[10], dim(0);

	std::cout << "\nDimensiunea vectorului de numere reale este: ";
	std::cin >> dim;

	for (auto j = 0; j < dim; j++)
	{
		std::cout << "vectorReali [" << j << "] = ";
		std::cin >> vectorReali[j];
	}

	std::cout << "\n\nColectia de numere reale nesortata va aparea mai jos! \n";

	Colectionar<double> colectionarReali(dim, vectorReali);

	colectionarReali.print();
	colectionarReali.sort();

	std::cout << "Colectia de numere reale sortata va aparea mai jos! \n";
	colectionarReali.print();

	Moneda* moneda = nullptr;
	int nrMonede(0);

	std::cout << "\nNumarul de monede este: ";
	std::cin >> nrMonede;

	moneda = new Moneda[nrMonede];

	for (auto j = 0; j < nrMonede; j++)
		std::cin >> moneda[j];

	std::cout << "\nColectia de monede nesortata va aparea mai jos! \n";

	Colectionar<Moneda> colectionarMonede(nrMonede, moneda);

	colectionarMonede.print();
	colectionarMonede.sort();

	std::cout << "Colectia de monede sortata va aparea mai jos! \n";
	colectionarMonede.print();

	Fotografie* fotografie = nullptr;
	int nrFotografi(0);

	std::cout << "\nNumarul de fotografi este: ";
	std::cin >> nrFotografi;

	fotografie = new Fotografie[nrFotografi];

	for (auto j = 0; j < nrFotografi; j++)
		std::cin >> fotografie[j];

	std::cout << "\nColectia de fotografi nesortata va aparea mai jos! \n";

	Colectionar<Fotografie> colectionarFotografi(nrFotografi, fotografie);

	colectionarFotografi.print();
	colectionarFotografi.sort();

	std::cout << "Colectia de fotografi sortata va aparea mai jos! \n";
	colectionarFotografi.print();

	delete[] moneda;
	delete[] fotografie;


	return 0;
}