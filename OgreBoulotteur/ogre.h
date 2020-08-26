/*****************************************************************//**
 * \file   ogre.h
 * \brief  Header de la biblioth�que permettant la gestion de l'Ogre.
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
 * \brief Permet de d�palcer l'Ogre dans la Foret.
 * Si l'Ogre rencontre un Enfant, il le d�vore.
 * \param ogre Un pointeur vers l'Ogre.
 * \param foret Un pointeur vers la Foret.
 * \param enfants Un tableau de type Enfants, afin de v�rifier si l'Ogre boulotte un Enfant.
 */
void deplacerOgre (Ogre* ogre, Foret foret, Enfants enfants);

/**
 * \brief Permet de v�rifier si l'Ogre trouve aux coordonn�es (x, y).
 * \param ogre Un pointeur vers l'Ogre.
 * \param x Un \c int pour l'absisse de l'Enfant
 * \param y Un \c int pour l'ordonn�e de l'Enfant
 * \return Un pointeur vers l'Ogre, s'il est pr�sent en coordonn�es (x, y).
 * \return \c NULL, si l'Ogre n'est pr�sent en coordonn�es (x, y).
 */
Ogre* ogrePresent (Ogre* ogre, int x, int y);

/**
 * \brief V�rifie si l'Ogre se trouve aux m�mes coordonn�es qu'un ou plusieurs Enfant. Si c'est le cas, il le(s) d�vore.
 * \param ogre Un pointeur vers l'Ogre.
 * \param enfants Un tableau de type Enfants.
 */
void boulotterEnfants (Ogre* ogre, Enfants enfants);

#endif // OGRE_H_INCLUDED
