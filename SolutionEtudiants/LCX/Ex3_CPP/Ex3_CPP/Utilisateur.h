#ifndef UTILISATEURX_H

#define UTILISATEUR_H

#include "FormesGeometriques.h"
#include "TriangleRectangle.h"
#include "Rectangle.h"
#include "Cercle.h"

class Utilisateur {
private:
    int m_CodeFormeChoisie;
    double m_x1, m_x2;
    FormesGeometriques* m_Forme;

public:
    Utilisateur();

    void ChoisirForme(int code);
    void SaisirLesParametres();
    void EffectuerLesCalculs();
    void AfficherResultats();
};

#endif // !UTILISATEURX_H

void EffectuerLesCalculs();
