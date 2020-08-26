/*****************************************************************//**
 * \file   ogre.h
 * \brief  Header de la bibliothèque permettant la gestion de l'Ogre.
 * 
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   August 2020
 *********************************************************************/
#ifndef OGRE_H_INCLUDED
#define OGRE_H_INCLUDED
#include "ogreboulotteur.h"

/**
 * \brief Positionne l'Ogre dans la Foret.
 * \param ogre Un pointeur vers l'Ogre.
 * \param foret Un pointeur vers la Foret.
 */
void initialiserOgre (Ogre* ogre, Foret foret);

/**
 * \brief Permet de dépalcer l'Ogre dans la Foret.
 * Si l'Ogre rencontre un Enfant, il le dévore.
 * \param ogre Un pointeur vers l'Ogre.
 * \param foret Un pointeur vers la Foret.
 * \param enfants Un tableau de type Enfants, afin de vérifier si l'Ogre boulotte un Enfant.
 */
void deplacerOgre (Ogre* ogre, Foret foret, Enfants enfants);

/**
 * \brief Permet de vérifier si l'Ogre trouve aux coordonnées (x, y).
 * \param ogre Un pointeur vers l'Ogre.
 * \param x Un \c int pour l'absisse de l'Enfant
 * \param y Un \c int pour l'ordonnée de l'Enfant
 * \return Un pointeur vers l'Ogre, s'il est présent en coordonnées (x, y).
 * \return \c NULL, si l'Ogre n'est présent en coordonnées (x, y).
 */
Ogre* ogrePresent (Ogre* ogre, int x, int y);

/**
 * \brief Vérifie si l'Ogre se trouve aux mêmes coordonnées qu'un ou plusieurs Enfant. Si c'est le cas, il le(s) dévore.
 * \param ogre Un pointeur vers l'Ogre.
 * \param enfants Un tableau de type Enfants.
 */
void boulotterEnfants (Ogre* ogre, Enfants enfants);

#endif // OGRE_H_INCLUDED
