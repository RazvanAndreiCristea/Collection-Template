#pragma once
#include "Moneda.h"
#include "Fotografie.h"

template <class TIP>
class Colectionar
{
	int dimensiuneColectie;
	TIP* colectie;

public:

	Colectionar();

	Colectionar(const int, const TIP*);

	~Colectionar();

	void print() const;

	void sort();
};