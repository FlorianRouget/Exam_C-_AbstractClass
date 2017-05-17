#include "Figure.h"


/*
BUT : Initialiser les donn�es membres de la classe
ENTREE : une abscisse et une ordonn�e
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
BUT : R�cup�rer la valeur de m_x
ENTREE : rien
SORTIE : la valeur de m_x
*/
int CFigure::getMX() const
{
	return m_x;
}

/*
BUT : R�cup�rer la valeur de m_y
ENTREE : rien
SORTIE : la valeur de m_y
*/
int CFigure::getMY() const
{
	return m_y;
}

/*
BUT : Donner une nouvelle valeur � m_x
ENTREE : La nouvelle valeur
SORTIE : rien
*/
void CFigure::setMX(int nv)
{
	this->m_x = nv;
}

/*
BUT : Donner une nouvelle valeur � m_y
ENTREE : La nouvelle valeur
SORTIE : rien
*/
void CFigure::setMY(int nv)
{
	this->m_y = nv;
}
