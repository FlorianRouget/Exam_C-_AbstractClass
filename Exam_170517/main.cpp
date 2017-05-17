#include "Figure.h"
#include "Rectangle.h"
#include "Cercle.h"
#include "Carre.h"

#include <iterator>
#include <vector>

int main() {

	vector<CFigure*> vect;												//Creation du container
	auto it = vect.begin();												//Declaration et initialisation de l'iterator
	vect.insert(it, new CRectangle(1, 2, 3, 4));						//Insertion du premier enfant de CFigure (un CRectangle)
	vect.push_back(new CRectangle(5, 6, 7, 8));							//Ajout du second enfant de CFigure (un CRectanlge)
	vect.push_back(new CCercle(1, 1, 9));								//Ajout du troisième enfant de CFigure (un CCercle)
	vect.push_back((CRectangle*) new CCarre(4, 4, 6));					//Ajout du quatrième enfant de CFigure (un CCercle que nous casterons en CRectangle)
	
	CRectangle *rect = (CRectangle*)vect.at(0);							//On récupère le premier élément du vecteur (un CRectangle)
	CRectangle *nrect = (CRectangle*)vect.at(1);						//On récupère le deuxième élément du vecteur (un CRectangle)
	CCercle *cir = (CCercle*)vect.at(2);								//On récupère le troisième élément du vecteur (un CCercle)
	CCarre *carre = (CCarre*)vect.at(3);								//On récupère le quatrième élément du vecteur (un CCarre)
																		//On caste à chaque fois le CFigure récupéré pour avoir le bon type

	rect->dessine();													//On affiche ensuite les résultats et on constate que toutes les données
	cout << endl;														//on été récupérées correctement.
	nrect->dessine();
	cout << endl;
	cir->dessine();
	cout << endl;
	carre->dessine();

	system("pause");

	return 0;
}