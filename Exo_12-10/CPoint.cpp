#include "CPoint.h"
#include <stdio.h>
#include <iostream>

using namespace std;

//Constructeur
CPoint::CPoint(int nX, int nY)
{
	this->m_nX = nX;
	this->m_nY = nY;
}

//Fonctions membres

//Fonctions amies
void affichage(CPoint& pt)
//BUT : Afficher les coordonnées d'un point
//ENTREE : Un point
//SORTIE : /
{
	cout << "La coordonnee X : " << pt.m_nX << endl;
	cout << "La coordonnee Y : " << pt.m_nY << endl;
}