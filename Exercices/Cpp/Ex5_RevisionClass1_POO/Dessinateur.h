#ifndef Dessinateur_h
#define Dessinateur_h

#include "Figure.h"

class Dessinateur {
public:
    // Constructeur et destructeur
    Dessinateur();
    ~Dessinateur();

    // M�thodes principales
    void ConstruireFigure(signed char Choix);
    void SaisirPositionXY(int NoPoint);
    void DessinerFigure();

private:
    // Pointeur vers la figure associ�e
    Figure* MaFigure;
};

#endif // Dessinateur_h
