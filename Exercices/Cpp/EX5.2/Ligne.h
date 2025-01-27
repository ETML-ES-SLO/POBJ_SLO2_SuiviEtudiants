#ifndef Ligne_h // V�rifie si Ligne_h n'a pas d�j� �t� d�fini
#define Ligne_h // D�finit Ligne_h pour �viter les inclusions multiples

#include "Figure.h" // Inclusion de la classe de base Figure

// D�finition de la classe Ligne, d�riv�e de la classe Figure
class Ligne : public Figure {
public:
    // Constructeur par d�faut
    Ligne();

    // Destructeur
    ~Ligne();

    // M�thode pour saisir les coordonn�es des points de la ligne
    void EffectuerSaisie(int NoPoint) override;

    // M�thode pour dessiner la ligne en affichant ses deux points
    void Dessiner() override;
};

#endif // Ligne_h // Fin de la d�finition conditionnelle pour �viter les inclusions multiples
