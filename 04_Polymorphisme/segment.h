#ifndef SEGMENT_H
#define SEGMENT_H
#include "element.h"


class Segment : public Element
{
public:
    Segment(const double _longueur,const double _angle, const int _vitesse);
    void Afficher();
private:
    double longueur;
    double angle;
    int vitesse;
};

#endif // SEGMENT_H
