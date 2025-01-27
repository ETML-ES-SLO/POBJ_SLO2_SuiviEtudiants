#ifndef Ellipse_h // V�rifie si Ellipse_h n'a pas d�j� �t� d�fini
#define Ellipse_h // D�finit Ellipse_h pour �viter les inclusions multiples

#include "Figure.h" // Inclusion de la classe de base Figure

// D�finition de la classe Ellipse, d�riv�e de la classe Figure
class Ellipse : public Figure {
public:
    // Constructeur par d�faut
    Ellipse();

    // Destructeur
    ~Ellipse();

    // M�thode pour saisir les coordonn�es des points de l'ellipse
    void EffectuerSaisie(int NoPoint) override;

    // M�thode pour dessiner l'ellipse en affichant ses deux points
    void Dessiner() override;
};

#endif // Ellipse_h // Fin de la d�finition conditionnelle pour �viter les inclusions multiples
