#ifndef Rectangle_h
#define Rectangle_h

#include "Figure.h"

class Rectangle : public Figure {
public:
    // Constructeur et destructeur
    Rectangle();
    ~Rectangle();

    // M�thodes sp�cifiques au rectangle
    void EffectuerSaisie(int NoPoint) override;
    void Dessiner() override;
};

#endif // Rectangle_h
