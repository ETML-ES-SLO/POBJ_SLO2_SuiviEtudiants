#include "Utilisateur.h"
#include "Rectangle.h"
#include "TriangleRectangle.h"
#include "Cercle.h"
#include <iostream>
#include <cctype> // Pour std::toupper

// Constructeur
Utilisateur::Utilisateur() : myFormesGeometriques(nullptr), m_CodeFormeChoisie(-1), x1(0), x2(0) {}

// Destructeur
Utilisateur::~Utilisateur() {
    delete myFormesGeometriques; // Lib�re la m�moire allou�e dynamiquement
}

// M�thode pour afficher un titre
void Utilisateur::AfficherTitre() {
    std::cout << "Cours CPP exercice 4" << std::endl;
}

// M�thode pour choisir une forme g�om�trique
int Utilisateur::ChoisirForme(int CodeForme) {
    m_CodeFormeChoisie = CodeForme;

    switch (m_CodeFormeChoisie) {
    case 0:
        myFormesGeometriques = new TriangleRectangle();
        break;
    case 1:
        myFormesGeometriques = new Rectangle();
        break;
    case 2:
        myFormesGeometriques = new Cercle();
        break;
    default:
        std::cout << "Erreur : code de forme invalide !" << std::endl;
        return -1;
    }
    return 0;
}

// M�thode pour saisir les param�tres de la forme
void Utilisateur::SaisirLesParametres() {
    switch (m_CodeFormeChoisie) {
    case 0:
        std::cout << "Entrez la base du TriangleRectangle : ";
        std::cin >> x1;
        std::cout << "Entrez la hauteur du TriangleRectangle : ";
        std::cin >> x2;
        break;
    case 1:
        std::cout << "Entrez la largeur du Rectangle : ";
        std::cin >> x1;
        std::cout << "Entrez la hauteur du Rectangle : ";
        std::cin >> x2;
        break;
    case 2:
        std::cout << "Entrez le diam�tre du Cercle : ";
        std::cin >> x1;
        x2 = 0; // Le second param�tre n'est pas utilis� pour un cercle
        break;
    default:
        std::cout << "Erreur : forme non reconnue." << std::endl;
        break;
    }
}

// M�thode pour ex�cuter les calculs
void Utilisateur::ExecuterLesCalculs() {
    if (myFormesGeometriques) {
        myFormesGeometriques->CalculerSurface(x1, x2);
        myFormesGeometriques->CalculerPerimetre(x1, x2);
    }
    else {
        std::cout << "Erreur : forme non initialis�e." << std::endl;
    }
}

// M�thode pour afficher les r�sultats
void Utilisateur::AfficherResultats() {
    if (myFormesGeometriques) {
        switch (m_CodeFormeChoisie) {
        case 0:
            std::cout << "Pour un TriangleRectangle base = " << x1
                << ", hauteur = " << x2
                << ", surface = " << myFormesGeometriques->GetSurface()
                << ", Perimetre = " << myFormesGeometriques->GetPerimetre()
                << std::endl;
            break;
        case 1:
            std::cout << "Pour un Rectangle largeur = " << x1
                << ", hauteur = " << x2
                << ", surface = " << myFormesGeometriques->GetSurface()
                << ", Perimetre = " << myFormesGeometriques->GetPerimetre()
                << std::endl;
            break;
        case 2:
            std::cout << "Pour un cercle diametre = " << x1
                << ", surface = " << myFormesGeometriques->GetSurface()
                << ", Perimetre = " << myFormesGeometriques->GetPerimetre()
                << std::endl;
            break;
        default:
            std::cout << "Erreur : forme inconnue." << std::endl;
            break;
        }
    }
    else {
        std::cout << "Erreur : forme non initialis�e." << std::endl;
    }

    // Question pour quitter le programme
    char choix;
    std::cout << "Entrez 'Q' pour quitter ou toute autre touche pour continuer : ";
    std::cin >> choix;
    choix = std::toupper(choix);

    if (choix == 'Q') {
        std::cout << "Sortie du programme." << std::endl;
        exit(0);
    }
}
