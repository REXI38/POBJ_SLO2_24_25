#ifndef RECTANGLE_H

#define RECTANGLE_H

#include "FormesGeometriques.h"

class Rectangle : public FormesGeometriques {
public:
    Rectangle();

    void CalculerSurface(double largeur, double hauteur) override;
    void CalculerPerimetre(double largeur, double hauteur) override;
};

#endif // !RECTANGLE_H