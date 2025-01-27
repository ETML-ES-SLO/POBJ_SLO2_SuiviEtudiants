#ifndef Point_h // V�rifie si Point_h n'a pas d�j� �t� d�fini
#define Point_h // D�finit Point_h pour �viter les inclusions multiples

// D�finition de la classe Point
class Point {
public:
    // M�thode pour afficher les coordonn�es X et Y du point
    void AfficherPoint();

    // M�thode pour d�finir les coordonn�es X et Y du point
    void SetXY(double ValX, double ValY);

    // M�thode pour obtenir la coordonn�e X du point
    double GetX();

    // M�thode pour obtenir la coordonn�e Y du point
    double GetY();

private:
    double X; // Attribut pour stocker la coordonn�e X
    double Y; // Attribut pour stocker la coordonn�e Y
};

#endif // Point_h // Fin de la d�finition conditionnelle pour �viter les inclusions multiples
