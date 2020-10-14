#pragma once
#include "CVect.h"

class CMatrice
{
private:
	double m_dblMatrice[3][3];

public:
	//Constructeur
	CMatrice(double dblTab[3][3]);

	//Fonctions amies
	friend CVect Prod(CMatrice, CVect&);
};