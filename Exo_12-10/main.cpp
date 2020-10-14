#include "CPoint.h"
#include "CVecteur3d.h"
#include "CVect.h"
#include "CMatrice.h"
#include <stdio.h>
#include <iostream>

using namespace std;

//Déclarations
void initTableau(double[3][3], double dblX);

void afficheTableau(double[3][3]);


//Définitions
void initTableau(double dblTab[3][3], double dblX)
//BUT : Initialiser un tableau de 3x3 à une valeur X
//ENTREE : Le tableau à initialiser et une valeur X pour initialiser celui-ci
//SORTIE : /
{
	for (int nI = 0; nI < 3; nI++)
	{
		for (int nJ = 0; nJ < 3; nJ++)
		{
			dblTab[nI][nJ] = dblX + nI + nJ;
		}
	}
}

void afficheTableau(double dblTab[3][3])
//BUT : Afficher un tableau de 3x3
//ENTREE : Un tableau de 3x3
//SORTIE : /
{
	cout << "Affichage de la matrice :" << endl;
	for (int nI = 0; nI < 3; nI++)
	{
		for (int nJ = 0; nJ < 3; nJ++)
		{
			cout << dblTab[nI][nJ] << " ";
		}
		cout << endl;
	}
}


int main()
{
	//Exercice 81 :
	cout << "Exercice 81 :" << endl;

	CPoint ptA(1, 4); //Point de classe automatique
	CPoint* ptB = new CPoint(2, 1); //Point de classe dynamique

	cout << "Affichage du point A :" << endl;
	affichage(ptA);

	cout << endl;

	cout << "Affichage du point B :" << endl;
	affichage(*ptB);

	cout << endl;


	//Exercice 82 :
	cout << "Exercice 82 :" << endl;

	CVecteur3d Vec0(5, 5, 5);
	cout << "Vecteur 0 : " << Vec0.get_fltX() << " ; " << Vec0.get_fltY() << " ; " << Vec0.get_fltZ() << endl;

	CVecteur3d Vec1(1, 9, 4);
	cout << "Vecteur 1 : " << Vec1.get_fltX() << " ; " << Vec1.get_fltY() << " ; " << Vec1.get_fltZ() << endl;

	CVecteur3d Vec2(5, 5, 5);
	cout << "Vecteur 2 : " << Vec2.get_fltX() << " ; " << Vec2.get_fltY() << " ; " << Vec2.get_fltZ() << endl;

	cout << endl;

	if (coincide(Vec0, Vec1))
	{
		cout << "Le Vecteur 0 et le Vecteur 1 ont les memes composantes" << endl;
	}
	else {
		cout << "Le Vecteur 0 et le Vecteur 1 n'ont pas les memes composantes" << endl;
	}

	if (coincide(Vec0, Vec2))
	{
		cout << "Le Vecteur 0 et le Vecteur 2 ont les memes composantes" << endl;
	}
	else {
		cout << "Le Vecteur 0 et le Vecteur 2 n'ont pas les memes composantes" << endl;
	}

	cout << endl;


	//Exercice 83 :
	cout << "Exercice 83 :" << endl << endl;

	double dblTab[3][3];

	initTableau(dblTab, 1);

	afficheTableau(dblTab);

	cout << endl;

	CMatrice Matrice(dblTab);

	CVect Vecteur0(1, 1, 1);
	CVect Vecteur1;

	Vecteur1 = Vecteur0.Prod(Matrice);

	affichage(Vecteur1);



	return 0;
}