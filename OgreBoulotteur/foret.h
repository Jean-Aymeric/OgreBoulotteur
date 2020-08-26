/*****************************************************************//**
 * \file   foret.h
 * \brief  Header de la biblioth�que permettant la gestion du tableau Foret.
 * 
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   August 2020
 *********************************************************************/
#ifndef FORET_H_INCLUDED
#define FORET_H_INCLUDED

#include "enfant.h"
#include "ogre.h"

/**
 * \brief Fonction affichant la Foret dans la console ainsi que les �l�ments Enfants et Ogre positionn�s dessus.
 * \param foret La Foret � afficher.
 */
void afficherForet (Foret foret, Enfants enfants, Ogre* ogre);

/**
 * \brief Fonction permettant d'initialiser la Foret en y pla�ant al�atoirement Arbre et Sol.
 * \param foret La Foret � initialiser.
 */
void initialiserForet (Foret foret);

/**
 * \brief Fonction permettant de faire bouger tous les Enfant et l'Ogre.
 * \param foret La Foret dans laquelle les �l�ments sont positionn�s.
 * \param enfants Les Enfant � faire bouger.
 * \param ogre Un pointeur vers l'Ogre � faire bouger.
 */
void faireVivreForet (Foret foret, Enfants enfants, Ogre* ogre);

#endif // FORET_H_INCLUDED
