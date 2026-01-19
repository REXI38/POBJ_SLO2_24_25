#define _USE_MATH_DEFINES
#include "FormesGeometriques.h"
#include <cmath>

class Cercle : public FormesGeometriques {
public:
    Cercle() : FormesGeometriques() {
        std::cout << "Constructeur de Cercle" << std::endl;
    }

    void CalculerSurface(double diametre, double /*x2*/) override {
        double rayon = diametre / 2.0;
        m_Surface = M_PI * rayon * rayon;
    }

    void CalculerPerimetre(double diametre, double /*x2*/) override {
        m_Perimetre = M_PI * diametre;
    }
};