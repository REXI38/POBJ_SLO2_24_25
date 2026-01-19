#include "FormesGeometriques.h"

class Rectangle : public FormesGeometriques {
public:
    Rectangle() : FormesGeometriques() {
        std::cout << "Constructeur de Rectangle" << std::endl;
    }

    void CalculerSurface(double largeur, double hauteur) override {
        m_Surface = largeur * hauteur;
    }

    void CalculerPerimetre(double largeur, double hauteur) override {
        m_Perimetre = 2 * (largeur + hauteur);
    }
};