#include "compteepargne.h"
#include "comptebancaire.h"
//  constructeur de la clase epargne//

 CompteEpargne::CompteEpargne(float _CompteBancaire,float _Deposer,float _Retirer,float _ConsulterSolde,int _CalculerInterets,int _ModifierTaux):
CompteBancaire(_CompteBancaire),
Deposer(_Deposer),
Retirer(_Retirer),
ConsulterSolde(_ConsulterSolde),
CalculerInterets(_CalculerInterets),
ModifierTaux(_ModifierTaux)
{
}
int CompteEpargne::CalculerInterets(){

    return CalculerInterets("Votre taux est de : % \n");
}

