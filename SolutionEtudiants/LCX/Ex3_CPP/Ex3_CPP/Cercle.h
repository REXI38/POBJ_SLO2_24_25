#ifndef CERCLE_H

#define CERCLE_H

#include "FormesGeometriques.h"

class Cercle : public FormesGeometriques {
public:
    Cercle();

    void CalculerSurface(double diametre, double x2) override;
    void CalculerPerimetre(double diametre, double x2) override;
};

#endif // !CERCLE_H