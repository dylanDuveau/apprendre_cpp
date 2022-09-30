#ifndef BARRE_H
#define BARRE_H

#include <math.h>
#include <iostream>
using namespace std;
class Barre
{
protected:
    string reference;
    int longueur;
    float densite;
    string nomAlliage;
public:
    Barre(const string _reference, const unsigned int _longueur,const float _densite, const string _nomAlliage);
    virtual ~Barre();
    virtual void AfficherCaracteristiques();
    virtual float CalculerMasse()=0;
};
#endif // BARRE_H
