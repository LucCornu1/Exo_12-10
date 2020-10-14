#include "CPoint.h"
#include "CVecteur3d.h"
#include <stdio.h>
#include <iostream>

using namespace std;

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

	return 0;
}