#pragma once

class CMatrice;
class CVect
{
private:
	double m_dblX, m_dblY, m_dblZ;

public:
	//Constructeur
	CVect(double dblX = 0.0, double dblY = 0.0, double dblZ = 0.0);

	//Fonctions membres
	CVect Prod(CMatrice);

	//Fonctions amies
	friend void affichage(CVect&);
};