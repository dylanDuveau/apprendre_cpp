#ifndef BARRECARREE_H
#define BARRECARREE_H

#include "barre.h"

class BarreCarree : public Barre
{
public:
    BarreCarree(string _reference, const unsigned int _longueur, const float _densite, string _nomAlliage, const int _cote);
    int CalculerSection();
    void AfficherCaracteristiques();
    float CalculerMasse();

private:
    int cote;
};

#endif // BARRECARREE_H
