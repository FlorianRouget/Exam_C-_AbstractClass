#pragma once
#include <iostream>

using namespace std;

class CFigure
{
	int m_x, m_y;

public:
	CFigure(int abs = 0, int ord = 0);
	~CFigure();

	int getMX() const;
	int getMY() const;
	void setMX(int nv);
	void setMY(int nv);

	virtual void dessine() const = 0;
	virtual double aire() const = 0;
	virtual double perimetre() const = 0;

};

