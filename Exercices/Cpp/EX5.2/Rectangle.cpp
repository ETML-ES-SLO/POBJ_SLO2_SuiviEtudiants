#include "Rectangle.h" // Inclusion du fichier d'en-t�te Rectangle
#include <iostream>    // Inclusion de la biblioth�que pour l'affichage via std::cout

// M�thode pour saisir les coordonn�es des coins du rectangle
void Rectangle::EffectuerSaisie(int NoPoint) {
    double x, y; // D�clare deux variables locales pour stocker les coordonn�es saisies
    if (NoPoint == 1) { // Si le point est le premier
        std::cout << "Entrez position X et Y du coin haut gauche du rectangle : "; // Invite pour le coin haut gauche
    }
    else { // Sinon, c'est le second point
        std::cout << "Entrez position X et Y du coin bas droit du rectangle : "; // Invite pour le coin bas droit
    }
    std::cin >> x >> y; // Lecture des coordonn�es saisies par l'utilisateur
    PairePoints[NoPoint - 1].SetXY(x, y); // Mise � jour des coordonn�es dans le tableau de points
}

// M�thode pour dessiner le rectangle
void Rectangle::Dessiner() {
    std::cout << "Dessin d'un Rectangle" << std::endl; // Affiche l'�tiquette pour le dessin d'un rectangle
    std::cout << "Position du coin haut gauche du rectangle : X = "
        << PairePoints[0].GetX() // Affiche la coordonn�e X du premier point (coin haut gauche)
        << " Y = " << PairePoints[0].GetY() // Affiche la coordonn�e Y du premier point (coin haut gauche)
        << std::endl;
    std::cout << "Position du coin bas droit du rectangle : X = "
        << PairePoints[1].GetX() // Affiche la coordonn�e X du second point (coin bas droit)
        << " Y = " << PairePoints[1].GetY() // Affiche la coordonn�e Y du second point (coin bas droit)
        << std::endl;
}

// Constructeur de la classe Rectangle
Rectangle::Rectangle() : Figure() { // Appelle le constructeur de la classe de base Figure
    std::cout << "Constructeur de Rectangle" << std::endl; // Message indiquant la cr�ation d'une instance de Rectangle
}

// Destructeur de la classe Rectangle
Rectangle::~Rectangle() {
    std::cout << "Destructeur de Rectangle" << std::endl; // Message indiquant la destruction d'une instance de Rectangle
}
