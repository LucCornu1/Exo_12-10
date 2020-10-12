#pragma once

class CPoint
{
private:
	int m_nX, m_nY;

public:
	//Constructeur
	CPoint(int nX = 0, int nY = 0);

	//Fonctions membres

	//Fonctions amies
	void friend affichage(CPoint&);
};