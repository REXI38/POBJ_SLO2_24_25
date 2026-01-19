#include "Utilisateur.h"

int main() {
    Utilisateur UserA, UserB, UserC;

    // UserA : TriangleRectangle
    UserA.ChoisirForme(0);
    UserA.SaisirLesParametres();
    UserA.EffectuerLesCalculs();
    UserA.AfficherResultats();

    // UserB : Rectangle
    UserB.ChoisirForme(1);
    UserB.SaisirLesParametres();
    UserB.EffectuerLesCalculs();
    UserB.AfficherResultats();

    // UserC : Cercle
    UserC.ChoisirForme(2);
    UserC.SaisirLesParametres();
    UserC.EffectuerLesCalculs();
    UserC.AfficherResultats();

    return 0;
}