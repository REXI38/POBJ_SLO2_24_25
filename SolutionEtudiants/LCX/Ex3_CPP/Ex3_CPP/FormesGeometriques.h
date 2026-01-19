#ifndef FORMESGEOMETRIQUES_H

#define FORMESGEOMETRIQUES_H

#include <iostream>

class FormesGeometriques {
protected:
    double m_Surface;
    double m_Perimetre;

public:
    FormesGeometriques();
    virtual ~FormesGeometriques();

    virtual void CalculerSurface(double x1, double x2) = 0;
    virtual void CalculerPerimetre(double x1, double x2) = 0;

    double GetSurface() const;
    double GetPerimetre() const;
};

#endif // !FORMESGEOMETRIQUES_H