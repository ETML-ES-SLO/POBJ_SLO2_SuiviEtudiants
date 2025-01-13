#include <iostream> // Inclusion de la biblioth�que standard pour les entr�es/sorties
#include "Dessinateur.h" // Inclusion du fichier d'en-t�te Dessinateur

int main() {
    char Rep; // Variable pour capturer la r�ponse de l'utilisateur avant de quitter le programme
    Dessinateur DessinateurA, DessinateurB, DessinateurC; // Cr�ation de trois objets Dessinateur

    // Construction des figures pour chaque dessinateur
    DessinateurA.ConstruireFigure('L'); // Associe une ligne au DessinateurA
    DessinateurB.ConstruireFigure('R'); // Associe un rectangle au DessinateurB
    DessinateurC.ConstruireFigure('E'); // Associe une ellipse au DessinateurC

    // Saisie et dessin imm�diat pour la ligne
    DessinateurA.SaisirPositionXY(1); // Saisit les coordonn�es du premier point de la ligne
    DessinateurA.SaisirPositionXY(2); // Saisit les coordonn�es du second point de la ligne
    DessinateurA.DessinerFigure(); // Dessine imm�diatement la ligne

    // Saisie et dessin imm�diat pour le rectangle
    DessinateurB.SaisirPositionXY(1); // Saisit les coordonn�es du coin haut gauche du rectangle
    DessinateurB.SaisirPositionXY(2); // Saisit les coordonn�es du coin bas droit du rectangle
    DessinateurB.DessinerFigure(); // Dessine imm�diatement le rectangle

    // Saisie et dessin imm�diat pour l'ellipse
    DessinateurC.SaisirPositionXY(1); // Saisit les coordonn�es du coin haut gauche de l'ellipse
    DessinateurC.SaisirPositionXY(2); // Saisit les coordonn�es du coin bas droit de l'ellipse
    DessinateurC.DessinerFigure(); // Dessine imm�diatement l'ellipse

    // Message de fin de programme
    std::cout << "Cours SL228_POBJ CPP exercice 5" << std::endl; // Affiche un message d'identification du cours
    std::cout << "Entrez Q pour quitter !" << std::endl; // Invite l'utilisateur � quitter le programme
    std::cin >> Rep; // Lecture de la r�ponse de l'utilisateur
    return 0; // Fin du programme
}
