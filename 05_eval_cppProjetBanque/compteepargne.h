#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include "comptebancaire.h"

class CompteEpargne : public CompteBancaire
{
public:
    CompteEpargne(float _CompteBancaire, float _Deposer, float _Retirer, float _ConsulterSolde, int _CalculerInterets,int _ModifierTaux);
    float CompteBancaire;
    float Deposer;
    float Retirer;
    float ConsulterSolde;
    int CalculerInterets = 2;
    int ModifierTaux;
private:
    float Tauxinterest;
};

#endif // COMPTEEPARGNE_H
