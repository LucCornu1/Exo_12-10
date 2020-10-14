#pragma once

class CVecteur3d
{
private:
	float m_fltX, m_fltY, m_fltZ;

public:
	//Constructeur
	CVecteur3d(float fltX = 0.0, float fltY = 0.0, float fltZ = 0.0);

	//Fonctions amies
	friend bool coincide(CVecteur3d&, CVecteur3d&);

	//Assesseurs
	float get_fltX();
	float get_fltY();
	float get_fltZ();
};