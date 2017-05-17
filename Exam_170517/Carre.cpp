#include "Carre.h"


/*
BUT : Initialiser les donn�es membres de la classe, ainsi que celles de la classe m�re
ENTREE : une abscisse, une ordonn�e, une largeur et une hauteur
SORTIE : rien
*/
CCarre::CCarre(int abs, int ord, int h):CRectangle(abs, ord, h, h)
{
}

/*
BUT : Initialiser les donn�es membres de la classe, ainsi que celles de la classe m�re
ENTREE : une r�f�rence d'un carr� d�j� existant
SORTIE : rien
*/
CCarre::CCarre(const CCarre & square) : CRectangle(square)
{
}


CCarre::~CCarre()
{
}

/*
BUT : R�cup�rer la valeur de la hauteur du carre
ENTREE : rien
SORTIE : la valeur de m_height de la classe m�re
*/
int CCarre::getEdge() const
{
	return this->getHeight();
}

/*
BUT : Donner une nouvelle valeur � la hauteur et la largeur du carre
ENTREE : La nouvelle valeur
SORTIE : rien
*/
void CCarre::setEdge(int nv)
{
	this->setHeight(nv);
	this->setWidth(nv);
}

/*
BUT : Afficher les param�tre du carre (nature, taille, position, perimetre, surface)
ENTREE : rien
SORTIE : l'affichage des donn�es
*/
void CCarre::dessine() const
{
	cout << "Je suis un Carre" << endl;
	cout << "Je me situe en (" << this->getMX() << ";" << this->getMY() << ")" << endl;
	cout << "Mon cote est de taille " << getEdge() << endl;
	cout << "J'ai un perimetre de " << perimetre() << endl;
	cout << "J'ai une surface de " << aire() << endl;
}

/*
BUT : Calcule la surface du carre (c*c)
ENTREE : rien
SORTIE : la surface du carre
*/
double CCarre::aire() const
{
	int result = this->getHeight()*this->getHeight();
	return result;
}

/*
BUT : Calcule le perimetre du carre (c*4)
ENTREE : rien
SORTIE : le perimetre du carre
*/
double CCarre::perimetre() const
{
	int result = this->getHeight() * 4;
	return result;
}
