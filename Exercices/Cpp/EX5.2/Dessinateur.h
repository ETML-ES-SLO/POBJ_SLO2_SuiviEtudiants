#ifndef Dessinateur_h // V�rifie si Dessinateur_h n'a pas d�j� �t� d�fini
#define Dessinateur_h // D�finit Dessinateur_h pour �viter les inclusions multiples

#include "Figure.h" // Inclusion de la classe Figure, manipul�e par le Dessinateur

// D�finition de la classe Dessinateur
class Dessinateur {
public:
    // Constructeur par d�faut
    Dessinateur();

    // Destructeur
    ~Dessinateur();

    // M�thode pour cr�er une figure en fonction du choix de l'utilisateur
    void ConstruireFigure(signed char Choix);

    // M�thode pour saisir les coordonn�es d'un point pour la figure associ�e
    void SaisirPositionXY(int NoPoint);

    // M�thode pour dessiner la figure associ�e
    void DessinerFigure();

private:
    Figure* MaFigure; // Pointeur vers la figure associ�e au dessinateur
};

#endif // Dessinateur_h // Fin de la d�finition conditionnelle pour �viter les inclusions multiples
