#include "CVect.h"
#include <iostream>

using namespace std;

//Constructeur
CVect::CVect(double dblX, double dblY, double dblZ)
{
	this->m_dblX = dblX;
	this->m_dblY = dblY;
	this->m_dblZ = dblZ;
}


//Fonctions amies

void affichage(CVect& Vec)
//BUT : Afficher les composantes du vecteur
//ENTREE : Le vecteur à afficher
//SORTIE : /
{
	cout << Vec.m_dblX << " ; " << Vec.m_dblY << " ; " << Vec.m_dblZ << endl;
}