#pragma once
#include "Rectangle.h"

class CCarre :protected CRectangle
{
public:
	CCarre(int abs = 0, int ord = 0, int h = 0);
	CCarre(const CCarre &square);
	~CCarre();

	int getEdge() const;
	void setEdge(int nv);

	void dessine() const;
	double aire() const;
	double perimetre() const;
};

