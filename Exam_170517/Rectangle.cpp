#include "Rectangle.h"


/*
BUT : Initialiser les donn�es membres de la classe, ainsi que celles de la classe m�re
ENTREE : une abscisse, une ordonn�e, une largeur et une hauteur
SORTIE : rien
*/
CRectangle::CRectangle(int abs, int ord, int w, int h):CFigure(abs, ord)
{
	this->m_width = w;
	this->m_height = h;
}

/*
BUT : Initialiser les donn�es membres de la classe, ainsi que celles de la classe m�re
ENTREE : une r�f�rence d'un rectangle d�j� existant
SORTIE : rien
*/
CRectangle::CRectangle(const CRectangle & rect):CFigure(rect.getMX(), rect.getMY())
{
	this->m_width = rect.getWidth();
	this->m_height = rect.getHeight();
}


CRectangle::~CRectangle()
{
}

/*
BUT : R�cup�rer la valeur de m_width
ENTREE : rien
SORTIE : la valeur de m_width
*/
int CRectangle::getWidth() const
{
	return m_width;
}

/*
BUT : R�cup�rer la valeur de m_height
ENTREE : rien
SORTIE : la valeur de m_height
*/
int CRectangle::getHeight() const
{
	return m_height;
}

/*
BUT : Donner une nouvelle valeur � m_width
ENTREE : La nouvelle valeur
SORTIE : rien
*/
void CRectangle::setWidth(int nv)
{
	this->m_width = nv;
}

/*
BUT : Donner une nouvelle valeur � m_height
ENTREE : La nouvelle valeur
SORTIE : rien
*/
void CRectangle::setHeight(int nv)
{
	this->m_height = nv;
}

/*
BUT : Afficher les param�tre du rectangle (nature, taille, position, perimetre, surface) 
ENTREE : rien
SORTIE : l'affichage des donn�es
*/
void CRectangle::dessine() const
{
	cout << "Je suis un Rectangle" << endl;
	cout << "Je me situe en (" << this->getMX() << ";" << this->getMY() << ")" << endl;
	cout << "Je suis de taille " << m_width << "x" << m_height << endl;
	cout << "J'ai un perimetre de " << perimetre() << endl;
	cout << "J'ai une surface de " << aire() << endl;
}

/*
BUT : Calcule la surface du rectangle (l*L)
ENTREE : rien
SORTIE : la surface du rectangle
*/
double CRectangle::aire() const
{
	return m_height*m_width;
}

/*
BUT : Calcule le perimetre du rectangle (2*(l+L))
ENTREE : rien
SORTIE : le perimetre du rectangle
*/
double CRectangle::perimetre() const
{
	return 2*(m_height+m_width);
}
