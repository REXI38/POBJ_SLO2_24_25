


#ifndef _DESSINATEUR_H
#define _DESSINATEUR_H


#include "Figure.h" 

class Dessinateur
{
	//atributs
public:
	
private:
	signed char m_FigureChoisie;
	Figure Mafigure;
	Figure* Manewfigure;
protected:

	//methodes

public:
	void ConstruireFigure(signed char Choix);
	void SaisirPositionXY(int NoPoint);
	void DessinerFigure();
private:

protected:


};


#endif // !DESSINATEUR_H

