#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H


class CompteBancaire
{
protected:
    float solde;
    float montant;
public:
    CompteBancaire(float _solde);
    void Deposer(float _montant);
    bool Retirer(float _montant);
    float ConsulterSolde();


};

#endif // COMPTEBANCAIRE_H

