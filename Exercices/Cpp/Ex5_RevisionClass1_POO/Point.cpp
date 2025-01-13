#include "Point.h"

// Affiche les coordonn�es X et Y du point
void Point::AfficherPoint() {
    std::cout << "X = " << X << " Y = " << Y;
}

// D�finit les coordonn�es X et Y du point
void Point::SetXY(double ValX, double ValY) {
    X = ValX;
    Y = ValY;
}

// Retourne la coordonn�e X du point
double Point::GetX() {
    return X;
}

// Retourne la coordonn�e Y du point
double Point::GetY() {
    return Y;
}