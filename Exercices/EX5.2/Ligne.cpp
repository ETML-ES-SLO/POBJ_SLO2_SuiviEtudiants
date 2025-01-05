#include "Ligne.h" // Inclusion du fichier d'en-t�te Ligne
#include <iostream> // Inclusion de la biblioth�que pour l'affichage via std::cout

// M�thode pour saisir les coordonn�es des points de la ligne
void Ligne::EffectuerSaisie(int NoPoint) 
{
    double x, y; // D�clare deux variables locales pour stocker les coordonn�es saisies
    if (NoPoint == 1) { // Si le point est le premier
        std::cout << "Entrez position X et Y du d�but de la ligne : "; // Invite pour le d�but de la ligne
    }
    else { // Sinon, c'est le second point
        std::cout << "Entrez position X et Y de la fin de la ligne : "; // Invite pour la fin de la ligne
    }
    std::cin >> x >> y; // Lecture des coordonn�es saisies par l'utilisateur
    PairePoints[NoPoint - 1].SetXY(x, y); // Mise � jour des coordonn�es dans le tableau de points
}

// M�thode pour dessiner la ligne
void Ligne::Dessiner() 
{
    std::cout << "Dessin d'une Ligne" << std::endl; // Affiche l'�tiquette pour le dessin d'une ligne
    std::cout << "D�but de la ligne : X = " << PairePoints[0].GetX() // Affiche la coordonn�e X du premier point
        << " Y = " << PairePoints[0].GetY() << std::endl; // Affiche la coordonn�e Y du premier point
    std::cout << "Fin de la ligne : X = " << PairePoints[1].GetX() // Affiche la coordonn�e X du second point
        << " Y = " << PairePoints[1].GetY() << std::endl; // Affiche la coordonn�e Y du second point
}

// Constructeur de la classe Ligne
Ligne::Ligne() : Figure() 
{ // Appelle le constructeur de la classe de base Figure
    std::cout << "Constructeur de Ligne" << std::endl; // Message indiquant la cr�ation d'une instance de Ligne
}

// Destructeur de la classe Ligne
Ligne::~Ligne() 
{
    std::cout << "Destructeur de Ligne" << std::endl; // Message indiquant la destruction d'une instance de Ligne
}
