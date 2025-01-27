#include "Dessinateur.h" // Inclusion du fichier d'en-t�te Dessinateur
#include "Ligne.h"       // Inclusion de la classe Ligne
#include "Rectangle.h"   // Inclusion de la classe Rectangle
#include "Ellipse.h"     // Inclusion de la classe Ellipse
#include <iostream>      // Inclusion de la biblioth�que pour l'affichage via std::cout

// Constructeur de la classe Dessinateur
Dessinateur::Dessinateur() : MaFigure(nullptr) 
{
    // Initialise le pointeur MaFigure � nullptr
}

// Destructeur de la classe Dessinateur
Dessinateur::~Dessinateur() 
{
    delete MaFigure; // Lib�re la m�moire associ�e � MaFigure si elle a �t� allou�e
}

// M�thode pour cr�er une figure en fonction du choix de l'utilisateur
void Dessinateur::ConstruireFigure(signed char Choix) 
{
    delete MaFigure; // Lib�re la m�moire de l'ancienne figure pour �viter les fuites
    switch (Choix) {
    case 'L':
        MaFigure = new Ligne(); // Alloue une nouvelle Ligne si le choix est 'L'
        break;
    case 'R':
        MaFigure = new Rectangle(); // Alloue un nouveau Rectangle si le choix est 'R'
        break;
    case 'E':
        MaFigure = new Ellipse(); // Alloue une nouvelle Ellipse si le choix est 'E'
        break;
    default:
        MaFigure = nullptr; // Si le choix est invalide, aucun objet n'est cr��
        break;
    }
}

// M�thode pour saisir la position d'un point pour la figure associ�e
void Dessinateur::SaisirPositionXY(int NoPoint) 
{
    if (MaFigure) {
        MaFigure->EffectuerSaisie(NoPoint); // Appelle la m�thode de saisie de la figure associ�e
    }
}

// M�thode pour dessiner la figure associ�e
void Dessinateur::DessinerFigure() 
{
    if (MaFigure) {
        MaFigure->Dessiner(); // Appelle la m�thode Dessiner de la figure associ�e
    }
}

