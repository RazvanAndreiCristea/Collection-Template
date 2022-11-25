#include "Colectionar.h"

template <class TIP>
Colectionar<TIP>::Colectionar()
{
	dimensiuneColectie = 0;
	colectie = nullptr;
}

template <class TIP>
Colectionar<TIP>::Colectionar(const int dimensiuneColectie, const TIP* colectie)
{
	this->dimensiuneColectie = dimensiuneColectie;

	if (colectie != nullptr)
	{
		this->colectie = new TIP[dimensiuneColectie];

		for (auto j = 0; j < dimensiuneColectie; j++)
			this->colectie[j] = colectie[j];
	}
}

template <class TIP>
Colectionar<TIP>::~Colectionar()
{
	if (colectie != nullptr)
		delete[] colectie;
}

template <class TIP>
void Colectionar<TIP>::print() const
{
	std::cout << "\n=======================================================================\n\n";

	std::cout << "Dimensiunea colectiei este egala cu: " << dimensiuneColectie << '\n';

	std::cout << "Colectia se poate vedea mai jos! \n\n";

	for (auto j = 0; j < dimensiuneColectie; j++)
		std::cout << colectie[j] << '\n';

	std::cout << "\n=======================================================================\n\n";
}

template <class TIP>
void Colectionar<TIP>::sort()
{
	for (auto j = 0; j < dimensiuneColectie - 1; j++)
		for (auto jdex = j + 1; jdex < dimensiuneColectie; jdex++)
			if (colectie[j] < colectie[jdex])
			{
				TIP auxiliar = colectie[j];
				colectie[j] = colectie[jdex];
				colectie[jdex] = auxiliar;
			}
}

namespace tester // acest namespace nu se va utiliza niciodata trebuie scris ca programul sa functioneze
{
	void testerColectionar()
	{
		int v[3] = { 1,2,3 };

		Colectionar<int> c1(3, v);

		c1.print();

		double d[3] = { 1.1,2.2,3.3 };

		Colectionar<double> c2(3, d);

		c2.print();

		Moneda* m = new Moneda[3];

		m[0] = Moneda(10, 2010);
		m[1] = Moneda(5, 2022);
		m[2] = Moneda(50, 2019);

		Colectionar<Moneda> c3(3, m);

		c3.print();

		Fotografie* f = new Fotografie[3];

		f[0] = Fotografie(1.5, 5, "12 Decembrie 2022");
		f[1] = Fotografie(3.25, 4, "10 Iulie 2015");
		f[2] = Fotografie(7.5, 2, "14 August 1990");

		Colectionar<Fotografie> c4(3, f);

		c4.print();

		c1.sort();
		c2.sort();
		c3.sort();
		c4.sort();

		delete[] m;
		delete[] f;
	}
}