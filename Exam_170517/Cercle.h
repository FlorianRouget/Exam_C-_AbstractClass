#pragma once
#include "Figure.h"

class CCercle : public CFigure
{
	int m_radius;

public:
	CCercle(int abs = 0, int ord = 0, int rad = 0);
	CCercle(const CCercle &circle);
	~CCercle();

	void setRadius(int nv);
	int getRadius() const;

	void dessine() const;
	double aire() const;
	double perimetre() const;

};

