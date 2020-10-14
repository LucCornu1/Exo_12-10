#include "CVect.h"
#include "CMatrice.h"

CVect Prod(CMatrice Matrice, CVect& vVect)
//BUT : Effectuer le produit d'un vecteur et d'une matrice
//ENTREE : Une matrice
//SORTIE : Le produit d'un vecteur et d'une matrice, qui est un nouveau vecteur
{
	double tabResultat[3]; //Création d'un tableau provisoire pour stocker les composantes du vecteur 1

	for (int nI = 0; nI < 3; nI++)
	//Initialisation du tableau
	{
		tabResultat[nI] = 0; //À 0 pour le moment
	}

	double tabVecteur[3]; //Transformation du vecteur vVect sous forme de matrice
	//Initialisation du tableau avec les composantes de vVect
	tabVecteur[0] = vVect.m_dblX;
	tabVecteur[1] = vVect.m_dblY;
	tabVecteur[2] = vVect.m_dblZ;

	for (int nI = 0; nI < 3; nI++)
	{
		for (int nJ = 0; nJ < 3; nJ++)
		{
			tabResultat[nI] += Matrice.m_dblMatrice[nJ][nI] * tabVecteur[nJ]; //Calcul du produit matriciel
		}
	}

	CVect Vecteur1(tabResultat[0], tabResultat[1], tabResultat[2]); //Création du vecteur 1, et assignation de ses composantes
	return Vecteur1;
}