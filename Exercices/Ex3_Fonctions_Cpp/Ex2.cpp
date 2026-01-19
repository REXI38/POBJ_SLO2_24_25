// Canevas Ex2 SL228_POBJ language C++ 
// Visual Studio 2015
// 11.11.2016 C. Huber

#include <iostream>
#include <iomanip>
//using namespace std;


// Fonction Extract : convertit un nombre de secondes en heures, minutes, secondes
void Extract(int secondes) {
	int heures = secondes / 3600;
	int minutes = (secondes % 3600) / 60;
	int secs = secondes % 60;

	std::cout << "Extract: " << secondes << " secondes = "
		<< heures << "h " << minutes << "m " << secs << "s" << std::endl;
}

// Fonction AfficheB : affiche une suite de valeurs calculées à partir d’un entier
void AfficheB(int n) {
	if (n >= 0 && n <= 9) {
		for (int i = 0; i < n; i++) {
			int ValB1 = 100 + (10 * i);
			double ValB2 = ValB1 / 10000.0;
            std::cout << "AfficheB: i=" << i
				<< " ValB1=" << ValB1
				<< " ValB2=" << ValB2 << std::endl;
		}
	}
	else {
		std::cout << "AfficheB: valeur n doit etre entre 0 et 9 !" << std::endl;
	}
}

// Fonction CalculSurfaceRectangle : surcharge pour différents paramètres
// a) deux int
int CalculSurfaceRectangle(int largeur, int hauteur) {
	return largeur * hauteur;
}

// b) deux double
double CalculSurfaceRectangle(double largeur, double hauteur) {
	return largeur * hauteur;
}

// c) quatre int (coordonnées d’un rectangle)
int CalculSurfaceRectangle(int x1, int y1, int x2, int y2) {
	int largeur = x2 - x1;
	int hauteur = y2 - y1;
	return largeur * hauteur;
}


int main(void) {
    char UserAnswer;
    int ValA, ValB;

    std::cout << "Exercice 2 : Huber Christian" << std::endl;

    do {
        std::cout << "Test A, B ou C, Q pour Quitter" << std::endl;
        std::cin >> UserAnswer;

        switch (UserAnswer) {
        case 'A':
        case 'a':
            std::cout << "TestA: entrez un nombre de secondes" << std::endl;
            std::cin >> ValA;
            Extract(ValA);
            break;

        case 'B':
        case 'b':
            std::cout << "TestB: entrez un nombre " << std::endl;
            std::cin >> ValB;
            AfficheB(ValB);
            break;

        case 'C':
        case 'c':
            std::cout << "TestC: calculs surface " << std::endl;

            // a) Avec 2 paramètres int
            std::cout << "Surface (int 25,45) = "
                << CalculSurfaceRectangle(25, 45) << std::endl;

            // b) Avec 2 paramètres double
            std::cout << "Surface (double 23.25,44.33) = "
                << CalculSurfaceRectangle(23.25, 44.33) << std::endl;

            // c) Avec 4 paramètres int
            std::cout << "Surface (coords 20,20,60,40) = "
                << CalculSurfaceRectangle(20, 20, 60, 40) << std::endl;
            break;
        } // end switch

    } while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

    return 0;
}