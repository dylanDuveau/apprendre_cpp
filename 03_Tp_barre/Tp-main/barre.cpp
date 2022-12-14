#include "barre.h"


Barre::Barre(string _reference, const unsigned int _longueur, const float _densite, const string _nomAlliage):
    reference(_reference),
    longueur(_longueur),
    densite(_densite),
    nomAlliage(_nomAlliage)
{
}

void Barre::AfficherCaracteristiques()
{
    cout << "Le numero de reférence est n°" << reference << endl;
    cout << "La longueur est de: " << longueur << " m" <<  endl;
    cout << "La densite est de: " << densite << " kg/m3" << endl;
    cout << "Le nom de l'alliage est: " << nomAlliage << endl;
}
