#ifndef Rectangle_h // V�rifie si Rectangle_h n'a pas d�j� �t� d�fini
#define Rectangle_h // D�finit Rectangle_h pour �viter les inclusions multiples

#include "Figure.h" // Inclusion de la classe de base Figure

// D�finition de la classe Rectangle, d�riv�e de la classe Figure
class Rectangle : public Figure {
public:
    // Constructeur par d�faut
    Rectangle();

    // Destructeur
    ~Rectangle();

    // M�thode pour saisir les coordonn�es des coins du rectangle
    void EffectuerSaisie(int NoPoint) override;

    // M�thode pour dessiner le rectangle en affichant ses coins
    void Dessiner() override;
};

#endif // Rectangle_h // Fin de la d�finition conditionnelle pour �viter les inclusions multiples
