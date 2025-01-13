#ifndef Figure_h
#define Figure_h

#include "Point.h"

class Figure {
public:
    // Constructeur et destructeur
    Figure();
    virtual ~Figure();

    // M�thodes virtuelles
    virtual void EffectuerSaisie(int NoPoint) = 0;
    virtual void Dessiner() = 0;

protected:
    // Tableau de deux points d�finissant la figure
    Point PairePoints[2];
};

#endif // Figure_h
