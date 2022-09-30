#include "barreronde.h"
#include <cmath>


BarreRonde::BarreRonde(string _reference, const unsigned int _longueur, const float _densite, string _nomAlliage, const int _diametre):
    Barre(_reference, _longueur, _densite, _nomAlliage),
    diametre(_diametre)

{
}

void BarreRonde::AfficherCaracteristique()
{
    Barre::AfficherCaracteristiques();
    cout << "Le diametre est de: " << diametre << " m " << endl;
}

float BarreRonde::CalculerSection()
{
    return M_PI*(diametre^2)/4;
}

float BarreRonde::CalculerMasse()
{
    return longueur*CalculerSection()*densite;

}
