#include "foret.h"

int main() {

    Foret foret;
    Enfants enfants;
    Ogre ogre;

    initialiserForet(foret);
    initialiserOgre(&ogre, foret);
    initialiserEnfants(enfants, foret);
    faireVivreForet(foret, enfants, &ogre);
 
    return 0;
}
