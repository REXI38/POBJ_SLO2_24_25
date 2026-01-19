#include <iostream>

class FormesGeometriques {
protected:
    double m_Surface;
    double m_Perimetre;

public:
    FormesGeometriques() : m_Surface(0), m_Perimetre(0) {
        std::cout << "Constructeur de FormesGeometriques" << std::endl;
    }
    virtual ~FormesGeometriques() {}

    virtual void CalculerSurface(double x1, double x2) = 0;
    virtual void CalculerPerimetre(double x1, double x2) = 0;

    double GetSurface() const { return m_Surface; }
    double GetPerimetre() const { return m_Perimetre; }
};