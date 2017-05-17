#include "Figure.h"


/*
BUT : Initialiser les données membres de la classe
ENTREE : une abscisse et une ordonnée
SORTIE : rien
*/
CFigure::CFigure(int abs, int ord)
{
	this->m_x = abs;
	this->m_y = ord;
}


CFigure::~CFigure()
{
}

/*
BUT : Récupérer la valeur de m_x
ENTREE : rien
SORTIE : la valeur de m_x
*/
int CFigure::getMX() const
{
	return m_x;
}

/*
BUT : Récupérer la valeur de m_y
ENTREE : rien
SORTIE : la valeur de m_y
*/
int CFigure::getMY() const
{
	return m_y;
}

/*
BUT : Donner une nouvelle valeur à m_x
ENTREE : La nouvelle valeur
SORTIE : rien
*/
void CFigure::setMX(int nv)
{
	this->m_x = nv;
}

/*
BUT : Donner une nouvelle valeur à m_y
ENTREE : La nouvelle valeur
SORTIE : rien
*/
void CFigure::setMY(int nv)
{
	this->m_y = nv;
}
