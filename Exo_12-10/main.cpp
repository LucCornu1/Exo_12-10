#include "CPoint.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	CPoint ptA(1, 4); //Point de classe automatique
	CPoint* ptB = new CPoint(2, 1); //Point de classe dynamique

	cout << "Affichage du point A :" << endl;
	affichage(ptA);

	cout << endl;

	cout << "Affichage du point B :" << endl;
	affichage(*ptB);

	return 0;
}