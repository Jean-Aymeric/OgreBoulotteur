#ifndef OGRE_H_INCLUDED
#define OGRE_H_INCLUDED
#include "ogreboulotteur.h"

void initialiserOgre(Ogre *ogre, Foret foret);
void deplacerOgre(Ogre *ogre, Foret foret, Enfants enfants);
Ogre *ogrePresent(Ogre *ogre, int x, int y);
void boulotterEnfants(Ogre *ogre, Enfants enfants);

#endif // OGRE_H_INCLUDED
