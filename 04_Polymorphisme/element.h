#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>

class Element
{
public:
    Element(const int _vitesse);
    virtual ~Element();
    virtual void Afficher() = 0;  //methode virtuel pure
    int getNumero() const;
    void setNumero(const int _numero);
protected:
    double vitesse;
    int numero;
};

#endif // ELEMENT_H
