




#ifndef _FIGURE_H
#define _FIGURE_H

class Figure
{
	
public:
	
	//methodes
	int GetP_public(int point);
	virtual void EffectuerSaisie(int NoPoint);
	virtual void Dessiner();
	Figure();
	~Figure();

private:
	
	int GetP_priv(int point_priv);
protected:
	int point;
	int GetP(int point);
	
};

#endif // !FIGURE_H