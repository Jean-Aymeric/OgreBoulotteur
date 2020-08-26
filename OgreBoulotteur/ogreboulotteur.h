/*****************************************************************//**
 * \file   ogreboulotteur.h
 * \brief  Bibliothèque principale du programme.
 *
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   August 2020
 *********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifndef OGREBOULOTTEUR_H_INCLUDED
#define OGREBOULOTTEUR_H_INCLUDED

#define FORET_HAUTEUR 20     ///< Définit la hauteur du tableau Foret.
#define FORET_LONGUEUR 40    ///< Définit la longueur du tableau Foret.
#define FORET_SOL 32         ///< Définit le caractère ASCCI utilisé pour représenter le sol.
#define FORET_ARBRE 219      ///< Définit le caractère ASCCI utilisé pour représenter un arbre.
#define FORET_ENFANT 169     ///< Définit le caractère ASCCI utilisé pour représenter un enfant.
#define FORET_OGRE 64        ///< Définit le caractère ASCCI utilisé pour représenter l'ogre.
#define FORET_MORT 241       ///< Définit le caractère ASCCI utilisé pour représenter un enfant mort.
#define NOMBRE_ENFANTS 50    ///< Définit le nombre initial d'enfants.
#define FORET_DENSITE 5      ///< \brief Définit la densité d'arbre dans la forêt.
                             ///< Plus le nombre est élevé et moins les arbres seront nombreux.
                             ///< Il y a 1 chance sur le nombre entré de créer un arbre. 

/**
 * \typedef char** Foret
 * \brief Ce tableau à 2 dimensions contient tous les éléments immobiles du programme :
 * - les arbres.
 * - les sols.
 * Sa hauteur est définie par la valeur de FORET_HAUTEUR et sa longueur par FORET_LONGUEUR.
 */
typedef char Foret[FORET_HAUTEUR][FORET_LONGUEUR];

/**
 * \enum Etat
 * \brief Donne l'état dans lequel se trouve un élément mobile, pour ce programme un Enfant.
 */
typedef enum Etat {
    VIVANT, ///< L'Enfant est vivant et peut bouger.
    MORT    ///< L'Enfant s'est fait boulotté.
} Etat;

/**
 * \struct Enfant
 * \brief Contient la position d'un enfant dans le tableau Foret et son Etat.
 */
typedef struct Enfant {
    int x;      ///< Position dans la longueur dans le tableau Foret.
    int y;      ///< Position dans la hauteur dans le tableau Foret.
    Etat etat;  ///< Etat de l'Enfant, VIVANT ou MORT.
} Enfant;

/**
 * \typedef char** Enfants
 * \brief Ce tableau à une dimension permet de stocker chaque Enfant. Sa taille est définit par NOMBRE_ENFANTS.
 */
typedef Enfant Enfants[NOMBRE_ENFANTS];

/**
 * \struct Ogre
 * \brief Contient la position de l'ogre dans le tableau Foret.
 */
typedef struct Ogre {
    int x, y;
} Ogre;

/**
 * \enum Direction
 * \brief Permet d'indiquer une direction Haut, Bas, Droite ou Gauche.
 */
typedef enum Direction {
    HAUT,
    DROITE,
    BAS,
    GAUCHE
} Direction;

#include "foret.h"

#endif // OGREBOULOTTEUR_H_INCLUDED
