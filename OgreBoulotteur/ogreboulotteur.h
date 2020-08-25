#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifndef OGREBOULOTTEUR_H_INCLUDED
#define OGREBOULOTTEUR_H_INCLUDED

#define FORET_LONGUEUR 40
#define FORET_HAUTEUR 20
#define FORET_SOL 32
#define FORET_ARBRE 219
#define FORET_DENSITE 5
#define FORET_ENFANT 169
#define FORET_OGRE 64
#define FORET_MORT 241
#define NOMBRE_ENFANTS 50

typedef char Foret[FORET_HAUTEUR][FORET_LONGUEUR];

typedef enum Etat {VIVANT, MORT} Etat;

typedef struct Enfant{
    int x, y;
    Etat etat;
} Enfant;

typedef Enfant Enfants[NOMBRE_ENFANTS];

typedef struct Ogre{
    int x, y;
} Ogre;

typedef enum Direction {HAUT, DROITE, BAS, GAUCHE} Direction;
#endif // OGREBOULOTTEUR_H_INCLUDED
