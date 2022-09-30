#include "segment.h"
#include <iomanip>
#include <iostream>
#include "math.h"
using namespace std;





Segment::Segment(const double _longueur, const double _angle, const int _vitesse):
    Element(_vitesse),
    longueur(_longueur),
    angle(_angle)
{

}

void Segment::Afficher()
{

   cout << "(" << numero <<")" << " SEGMENT L =";
    cout << setw(6) << left << longueur << "A = " << setw(10) << angle;
    cout <<"V = " << setw(5) << vitesse <<endl;
}
