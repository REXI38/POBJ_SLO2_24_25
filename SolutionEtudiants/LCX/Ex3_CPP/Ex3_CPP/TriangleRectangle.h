#ifndef TRIANGLERECTANGLE_H

#define TRIANGLERECTANGLE_H

#include "FormesGeometriques.h"

class TriangleRectangle : public FormesGeometriques {
public:
    TriangleRectangle();

    void CalculerSurface(double base, double hauteur) override;
    void CalculerPerimetre(double base, double hauteur) override;
};

#endif // !TRIANGLERECTANGLE_H