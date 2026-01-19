#include "Utilisateur.h"
#include "FormesGeometriques.h"
#include "TriangleRectangle.h"
#include "Rectangle.h"
#include "Cercle.h"



    void Utilisateur::SaisirLesParametres() {
        switch (m_CodeFormeChoisie) {
        case 0:
            std::cout << "Base ? "; std::cin >> m_x1;
            std::cout << "Hauteur ? "; std::cin >> m_x2;
            break;
        case 1:
            std::cout << "Largeur ? "; std::cin >> m_x1;
            std::cout << "Hauteur ? "; std::cin >> m_x2;
            break;
        case 2:
            std::cout << "Diametre ? "; std::cin >> Utilisateur::m_x1;
            Utilisateur::m_x2 = 0;
            break;
        }
    }

    void Utilisateur::EffectuerLesCalculs() {
        m_Forme->FormesGeometriques::CalculerSurface(m_x1, m_x2);
        Utilisateur::m_Forme->FormesGeometriques::CalculerPerimetre(Utilisateur::m_x1, Utilisateur::m_x2);
    }

    void AfficherResultats() {
        switch (m_CodeFormeChoisie) {
        case 0:
            std::cout << "TriangleRectangle base=" << m_x1 << " hauteur=" << m_x2
                << " surface=" << m_Forme->GetSurface()
                << " perimetre=" << m_Forme->GetPerimetre() << std::endl;
            break;
        case 1:
            std::cout << "Rectangle largeur=" << m_x1 << " hauteur=" << m_x2
                << " surface=" << m_Forme->GetSurface()
                << " perimetre=" << m_Forme->GetPerimetre() << std::endl;
            break;
        case 2:
            std::cout << "Cercle diametre=" << m_x1
                << " surface=" << m_Forme->GetSurface()
                << " perimetre=" << m_Forme->GetPerimetre() << std::endl;
            break;
        }
    }
