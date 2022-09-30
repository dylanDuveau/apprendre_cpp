#include "comptebancaire.h"
#include "math.h"
// constructeur de la clase Bancaire//

CompteBancaire::CompteBancaire(float _solde):
    solde(_solde)

{

}
//methode  pour deposer argent
void CompteBancaire::Deposer(float _montant)
{
    solde = solde+_montant;

}
//methode  pour retirer argent
bool CompteBancaire::Retirer(float _montant)
{
    solde = solde-_montant;
}
//mtehode pour consulter le solde
float CompteBancaire::ConsulterSolde()
{
    return solde;
}

