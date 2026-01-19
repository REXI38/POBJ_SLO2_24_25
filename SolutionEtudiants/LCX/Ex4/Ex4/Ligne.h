
#pragma once
#ifndef _LIGNE_H
#define _LIGNE_H


#include "Figure.h"

class Ligne : public Figure
{
	//methodes
public:
	void EffectuerSaisie(int NoPoint);
	void Dessiner();
	Ligne();
	~Ligne();

private:

protected:
};

#endif // !_LIGNE_H