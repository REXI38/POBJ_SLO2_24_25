
#pragma once
#ifndef _RECTANGLE_H
#define _RECTANGLE_H


#include "Figure.h"

class Rectangle : public Figure
{
	//methodes
public:
	void EffectuerSaisie(int NoPoint);
	void Dessiner();
	Rectangle();
	~Rectangle();

private:

protected:
};

#endif // !_RECTANGLE_H