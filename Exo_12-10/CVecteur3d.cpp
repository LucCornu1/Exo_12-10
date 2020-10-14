#include "CVecteur3d.h"
#include <iostream>

using namespace std;

//Constructeur
CVecteur3d::CVecteur3d(float fltX, float fltY, float fltZ)
{
	this->m_fltX = fltX;
	this->m_fltY = fltY;
	this->m_fltZ = fltZ;
}

//Fonctions amies
bool coincide(CVecteur3d& v1, CVecteur3d& v2)
//BUT : Savoir si deux vecteurs ont les mêmes composantes
//ENTREE : Deux vecteurs 3d
//SORTIE : Un booléen : faux si les deux vecteurs ne coincident pas, sinon vrai
{
	if (v1.m_fltX == v2.m_fltX && v1.m_fltY == v2.m_fltY && v1.m_fltZ == v2.m_fltZ)
	{
		return true;
	}
	else {
		return false;
	}
}

//Assesseurs
float CVecteur3d::get_fltX()
{
	return this->m_fltX;
}

float CVecteur3d::get_fltY()
{
	return this->m_fltY;
}

float CVecteur3d::get_fltZ()
{
	return this->m_fltZ;
}