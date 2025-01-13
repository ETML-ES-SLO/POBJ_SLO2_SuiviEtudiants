#ifndef Figure_h // V�rifie si Figure_h n'a pas d�j� �t� d�fini
#define Figure_h // D�finit Figure_h pour �viter les inclusions multiples

#include "Point.h" // Inclusion de la classe Point, utilis�e pour d�finir une figure

// D�finition de la classe abstraite Figure
class Figure {
public:
    // Constructeur par d�faut
    Figure();

    // Destructeur virtuel pour garantir la destruction correcte des classes d�riv�es
    virtual ~Figure();

    // M�thode virtuelle pure pour saisir les coordonn�es, � impl�menter dans les classes d�riv�es
    virtual void EffectuerSaisie(int NoPoint) = 0;

    // M�thode virtuelle pure pour dessiner la figure, � impl�menter dans les classes d�riv�es
    virtual void Dessiner() = 0;

protected:
    Point PairePoints[2]; // Tableau de deux points d�finissant les limites de la figure
};

#endif // Figure_h // Fin de la d�finition conditionnelle pour �viter les inclusions multiples
