#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"

class BarreRonde : public Barre
{
public:
    BarreRonde(string _reference, const unsigned int _longueur, const float _densite, string _nomAlliage, const int _largeur);
     void AfficherCaracteristique();
    float CalculerSection();
    float CalculerMasse();
private:
    int diametre;
};

#endif // BARRERONDE_H
