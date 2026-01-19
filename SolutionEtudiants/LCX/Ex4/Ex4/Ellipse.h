
#pragma once
#ifndef _ELLIPSE_H
#define _ELLIPSE_H


#include "Figure.h"

class Ellipse : public Figure
{
	//methodes
public:
	void EffectuerSaisie(int NoPoint);
	void Dessiner();
	Ellipse();
	~Ellipse();

private:

protected:
};

#endif // !_ELLIPSE_H