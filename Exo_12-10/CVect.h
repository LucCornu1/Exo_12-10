#pragma once

class CMatrice; //Appel de la classe CMatrice pour la fonction Prod
class CVect
{
private:
	double m_dblX, m_dblY, m_dblZ;

public:
	//Constructeur
	CVect(double dblX = 0.0, double dblY = 0.0, double dblZ = 0.0);

	//Fonctions amies
	friend CVect Prod(CMatrice, CVect&);
	
	friend void affichage(CVect&);
};