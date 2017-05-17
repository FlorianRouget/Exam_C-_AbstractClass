#pragma once
#include "Figure.h"

class CRectangle: public CFigure
{
	int m_width, m_height;

public:
	CRectangle(int abs = 0, int ord = 0, int w = 0, int h = 0);
	CRectangle(const CRectangle &rect);
	~CRectangle();

	int getWidth() const;
	int getHeight() const;
	void setWidth(int nv);
	void setHeight(int nv);

	void dessine() const;
	double aire() const;
	double perimetre() const;
};

