#include "Carre.h"


/*
BUT : Initialiser les données membres de la classe, ainsi que celles de la classe mère
ENTREE : une abscisse, une ordonnée, une largeur et une hauteur
SORTIE : rien
*/
CCarre::CCarre(int abs, int ord, int h):CRectangle(abs, ord, h, h)
{
}

/*
BUT : Initialiser les données membres de la classe, ainsi que celles de la classe mère
ENTREE : une référence d'un carré déjà existant
SORTIE : rien
*/
CCarre::CCarre(const CCarre & square) : CRectangle(square)
{
}


CCarre::~CCarre()
{
}

/*
BUT : Récupérer la valeur de la hauteur du carre
ENTREE : rien
SORTIE : la valeur de m_height de la classe mère
*/
int CCarre::getEdge() const
{
	return this->getHeight();
}

/*
BUT : Donner une nouvelle valeur à la hauteur et la largeur du carre
ENTREE : La nouvelle valeur
SORTIE : rien
*/
void CCarre::setEdge(int nv)
{
	this->setHeight(nv);
	this->setWidth(nv);
}

/*
BUT : Afficher les paramètre du carre (nature, taille, position, perimetre, surface)
ENTREE : rien
SORTIE : l'affichage des données
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
