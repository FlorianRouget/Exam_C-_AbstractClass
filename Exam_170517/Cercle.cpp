#include "Cercle.h"


/*
BUT : Initialiser les données membres de la classe, ainsi que celles de la classe mère
ENTREE : une abscisse, une ordonnée et un rayon
SORTIE : rien
*/
CCercle::CCercle(int abs, int ord, int rad):CFigure(abs,ord)
{
	this->m_radius = rad;
}

/*
BUT : Initialiser les données membres de la classe, ainsi que celles de la classe mère
ENTREE : une référence d'un cercle déjà existant
SORTIE : rien
*/
CCercle::CCercle(const CCercle & circle):CFigure(circle.getMX(), circle.getMY())
{
	this->m_radius = circle.getRadius();
}


CCercle::~CCercle()
{
}

/*
BUT : Donner une nouvelle valeur à m_radius
ENTREE : La nouvelle valeur
SORTIE : rien
*/
void CCercle::setRadius(int nv)
{
	this->m_radius = nv;
}

/*
BUT : Récupérer la valeur de m_radius
ENTREE : rien
SORTIE : la valeur de m_radius
*/
int CCercle::getRadius() const
{
	return m_radius;
}

/*
BUT : Afficher les paramètre du cercle (nature, taille, position, perimetre, surface)
ENTREE : rien
SORTIE : l'affichage des données
*/
void CCercle::dessine() const
{
	cout << "Je suis un Cercle" << endl;
	cout << "Je me situe en (" << this->getMX() << ";" << this->getMY() << ")" << endl;
	cout << "Mon rayon est de taille " << m_radius << endl;
	cout << "J'ai un perimetre de " << perimetre() << endl;
	cout << "J'ai une surface de " << aire() << endl;
}

/*
BUT : Calcule la surface du cercle (Pi*r*r)
ENTREE : rien
SORTIE : la surface du cercle
*/
double CCercle::aire() const
{
	//surface d'un cercle = Pi*r*r
	return (m_radius*m_radius*3.14);
}

/*
BUT : Calcule le perimetre du cercle (2*Pi*r)
ENTREE : rien
SORTIE : le perimetre du cercle
*/
double CCercle::perimetre() const
{
	//perimetre d'un cercle = 2*Pi*R
	return (2*3.14*m_radius);
}
