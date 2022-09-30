
#include <iostream>
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"
#include "menu.h"
#include "catalogue.h"
#define NB_BARRES 10

using namespace std;

int main()
{
    BarreCarree uneBarre("205316", 500 , 8.920, "Acier",2);
    uneBarre.AfficherCaracteristiques();
    cout << "Le poids de la barre est : " ;
    cout << uneBarre.CalculerMasse() / 1000.0;
    cout << " kg" << endl;
    cout << endl;
    return 0;
    //BarreRectangle rectangle("205316", 5, 13, "Cuivre", 4);
    //BarreRonde rond("456230", 12, 25, "Plastique", 25);
   // BarreCarree carre("548630", 15, 23, "Alluminium", 8);
    //Catalogue catalogue(NB_BARRES);
   // int choix;
}
