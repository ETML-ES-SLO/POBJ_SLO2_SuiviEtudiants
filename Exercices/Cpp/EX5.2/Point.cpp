#include "Point.h" // Inclusion du fichier d'en-t�te de la classe Point
#include <iostream> // Inclusion de la biblioth�que pour l'affichage via std::cout

// M�thode pour afficher les coordonn�es X et Y du point
void Point::AfficherPoint() 
{
    std::cout << "X = " << X << " Y = " << Y; // Affiche les coordonn�es sous forme X = valeur, Y = valeur
}

// M�thode pour d�finir les coordonn�es X et Y du point
void Point::SetXY(double ValX, double ValY) 
{
    X = ValX; // Assigne la valeur ValX � l'attribut X
    Y = ValY; // Assigne la valeur ValY � l'attribut Y
}

// M�thode pour r�cup�rer la coordonn�e X
double Point::GetX() 
{
    return X; // Retourne la valeur de l'attribut X
}

// M�thode pour r�cup�rer la coordonn�e Y
double Point::GetY() 
{
    return Y; // Retourne la valeur de l'attribut Y
}
