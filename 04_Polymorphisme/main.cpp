
#include "element.h"
#include "segment.h"
#include "trajectoire.h"
#include <iostream>
#include "math.h"

using namespace std;

int main()
{


    Trajectoire laTrajectoire(3);
    laTrajectoire.Ajouter(new Segment(9,0,3));
    laTrajectoire.Ajouter(new Segment(5,0.92795,2));
    laTrajectoire.Ajouter(new Segment(6,M_PI/2,1));
    laTrajectoire.Afficher();

    return 0;
}
