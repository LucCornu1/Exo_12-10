#include "CVect.h"
#include "CMatrice.h"
#include <iostream>

using namespace std;

//Constructeur
CVect::CVect(double dblX, double dblY, double dblZ)
{
	this->m_dblX = dblX;
	this->m_dblY = dblY;
	this->m_dblZ = dblZ;
}

//Fonctions membres
CVect CVect::Prod(CMatrice Matrice)
//BUT : Effectuer le produit d'un vecteur et d'une matrice
//ENTREE : Une matrice
//SORTIE : Le produit d'un vecteur et d'une matrice, qui est un nouveau vecteur
{
	double tabResultat[3] = { 0 };

	double tabVecteur[3];
	tabVecteur[0] = this->m_dblX;
	tabVecteur[1] = this->m_dblY;
	tabVecteur[2] = this->m_dblZ;

	for (int nI = 0; nI < 3; nI++)
	{
		for (int nJ = 0; nJ < 3; nJ++)
		{
			tabResultat[nI] += Matrice.m_dblMatrice[nJ][nI] * tabVecteur[nJ];
		}
	}

	CVect Vecteur(tabResultat[0], tabResultat[1], tabResultat[2]);
	return Vecteur;
}

//Fonctions amies
void affichage(CVect& Vec)
//BUT : Afficher les composantes du vecteur
//ENTREE : /
//SORTIE : /
{
	cout << Vec.m_dblX << " ; " << Vec.m_dblY << " ; " << Vec.m_dblZ << endl;
}