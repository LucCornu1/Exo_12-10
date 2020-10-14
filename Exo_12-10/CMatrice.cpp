#include "CMatrice.h"

//Constructeur
CMatrice::CMatrice(double dblTab[3][3])
{
	for (int nI = 0; nI < 3; nI++)
	{
		for (int nJ = 0; nJ < 3; nJ++)
		{
			this->m_dblMatrice[nI][nJ] = dblTab[nI][nJ];
		}
	}
}