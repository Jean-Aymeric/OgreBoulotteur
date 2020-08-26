/*****************************************************************//**
 * \file   enfant.h
 * \brief  Header de la bibliothèque permettant la gestion du tableau Enfants.
 *
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   August 2020
 *********************************************************************/
#ifndef ENFANT_H_INCLUDED
#define ENFANT_H_INCLUDED
#include "ogreboulotteur.h"

/**
 * \brief Positionne les Enfant du tableau Enfants dans la Foret.
 * \param enfants Un tableau de type Enfants.
 */
void initialiserEnfants (Enfants enfants, Foret foret);

/**
 * \brief Permet de positioner un Enfant das la Foret.
 * \param enfant pointeur vers un Enfant.
 * \param foret pointeur vers la Foret.
 */
void initialiserEnfant (Enfant* enfant, Foret foret);

/**
 * \brief Permet de vérifier si un Enfant se trouve aux coordonnées (x, y).
 * \param enfants Un tableau de type Enfants
 * \param x Un \c int pour l'absisse de l'Enfant
 * \param y Un \c int pour l'ordonnée de l'Enfant
 * \return Un pointeur vers un Enfant, si un Enfant est présent en coordonnées (x, y).
 * \return \c NULL, si aucun Enfant n'est présent en coordonnées (x, y).
 */
Enfant* enfantPresent (Enfants enfants, int x, int y);

/**
 * \brief Permet de déplacer tous les Enfant du tableau Enfants dans la Foret. Seuls les Enfant à l'Etat VIVANT sont déplacés.
 * \param enfants Un tableau de type Enfants
 * \param foret pointeur vers la Foret.
 */
void deplacerEnfants (Enfants enfants, Foret foret);

/**
 * \brief Permet de déplacer un Enfant dans la Foret. Si l'Enfant est à l'Etat MORT, il ne se déplacera pas.
 * \param enfant Pointeur vers un Enfant
 * \param foret pointeur vers la Foret.
 */void deplacerEnfant (Enfant* enfant, Foret foret);

#endif // ENFANT_H_INCLUDED
