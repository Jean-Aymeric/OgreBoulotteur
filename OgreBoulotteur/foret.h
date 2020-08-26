/*****************************************************************//**
 * \file   foret.h
 * \brief  Header de la bibliothèque permettant la gestion du tableau Foret.
 * 
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   August 2020
 *********************************************************************/
#ifndef FORET_H_INCLUDED
#define FORET_H_INCLUDED

#include "enfant.h"
#include "ogre.h"

/**
 * \brief Fonction affichant la Foret dans la console ainsi que les éléments Enfants et Ogre positionnés dessus.
 * \param foret La Foret à afficher.
 */
void afficherForet (Foret foret, Enfants enfants, Ogre* ogre);

/**
 * \brief Fonction permettant d'initialiser la Foret en y plaçant aléatoirement Arbre et Sol.
 * \param foret La Foret à initialiser.
 */
void initialiserForet (Foret foret);

/**
 * \brief Fonction permettant de faire bouger tous les Enfant et l'Ogre.
 * \param foret La Foret dans laquelle les éléments sont positionnés.
 * \param enfants Les Enfant à faire bouger.
 * \param ogre Un pointeur vers l'Ogre à faire bouger.
 */
void faireVivreForet (Foret foret, Enfants enfants, Ogre* ogre);

#endif // FORET_H_INCLUDED
