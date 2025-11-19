#ifndef FormesGeometriques_h
#define FormesGeometriques_h

#include "FormesGeometriques.h"

namespace FormesGeometriques {
class Rectangle;
} /* End of namespace FormesGeometriques */

class FormesGeometriques {
 public:

    
    class TriangleRectancle : public FormesGeometriques {
    
     public:
    
        double CalculerSurface(double base, double hauteur);
    
        double newOperation(double base, double hauter);
    };


    
    class Rectangle : public FormesGeometriques {
    
     public:
    
        double CalculerSurface(double largeur, double hauteur);
    
        double CalculePerimetre(double largeur, double hauteur);
    
     public:
    
        /**
         * @element-type Rectangle
         */
        FormesGeometriques::Rectangle *myRectangle;
    
        /**
         * @element-type Rectangle
         */
        FormesGeometriques::Rectangle *myRectangle;
    };


    
    class Cercle : public FormesGeometriques {
    
     public:
    
        double CalculeSurface(double diametre);
    
        double CalculePerimetre(double diametre);
    };


 public:

    virtual double CalculerSurface(double x1, double x2);

    virtual double newOperation(double x1, double x2);

    double GetSurface();

    double GetPerimetre();

 public:
    double Surface;
    double Perimetre;

};

#endif // FormesGeometriques_h
