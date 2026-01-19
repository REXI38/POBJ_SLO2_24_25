#include "FormesGeometriques.h"

class TriangleRectangle : public FormesGeometriques {
public:
    TriangleRectangle() : FormesGeometriques() {
        std::cout << "Constructeur de TriangleRectangle" << std::endl;
    }

    void CalculerSurface(double base, double hauteur) override {
        m_Surface = (base * hauteur) / 2.0;
    }

    void CalculerPerimetre(double base, double hauteur) override {
        double hypotenuse = sqrt(base * base + hauteur * hauteur);
        m_Perimetre = base + hauteur + hypotenuse;
    }
};