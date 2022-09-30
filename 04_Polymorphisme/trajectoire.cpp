#include "trajectoire.h"
#include <iostream>

using namespace std;


Trajectoire::Trajectoire(const int _nbEtapesMaxi):
    nbEtapesMaxi(_nbEtapesMaxi),
    prochaineEtape(0)
{

    parcours = new Element *[_nbEtapesMaxi];
}

Trajectoire::~Trajectoire()
{
    // Suppression des cellules du tableau
    for (int indice = 0 ; indice < prochaineEtape ; indice ++)
        delete parcours[indice];

    // Suppression du tableau
    delete [] parcours;
}

bool Trajectoire::Ajouter(Element *_pElement)
{
    bool retourTrajec = true;

    if (prochaineEtape < nbEtapesMaxi)
    {
        parcours[prochaineEtape++] = _pElement;
        parcours[prochaineEtape-1] -> setNumero(prochaineEtape);
    }
    else
        retourTrajec = false;

    return retourTrajec;
}

void Trajectoire::Afficher()
{
    cout << "Trajectoire : " << endl << endl;
    for (int indice =0; indice < nbEtapesMaxi; indice++){
        parcours[indice]->Afficher();
    }
    cout << endl;
}





