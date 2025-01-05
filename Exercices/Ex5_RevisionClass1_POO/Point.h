#ifndef Point_h
#define Point_h

class Point {
public:
    // Affiche les coordonn�es du point
    void AfficherPoint();

    // D�finit les coordonn�es du point
    void SetXY(double ValX, double ValY);

    // Accesseurs pour X et Y
    double GetX();
    double GetY();

private:
    // Coordonn�es du point
    double X;
    double Y;
};

#endif // Point_h