/*****************************************************************//**
 * \file   enfant.h
 * \brief  Header de la biblioth�que permettant la gestion du tableau Enfants.
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
 * \brief Permet de v�rifier si un Enfant se trouve aux coordonn�es (x, y).
 * \param enfants Un tableau de type Enfants
 * \param x Un \c int pour l'absisse de l'Enfant
 * \param y Un \c int pour l'ordonn�e de l'Enfant
 * \return Un pointeur vers un Enfant, si un Enfant est pr�sent en coordonn�es (x, y).
 * \return \c NULL, si aucun Enfant n'est pr�sent en coordonn�es (x, y).
 */
Enfant* enfantPresent (Enfants enfants, int x, int y);

/**
 * \brief Permet de d�placer tous les Enfant du tableau Enfants dans la Foret. Seuls les Enfant � l'Etat VIVANT sont d�plac�s.
 * \param enfants Un tableau de type Enfants
 * \param foret pointeur vers la Foret.
 */
void deplacerEnfants (Enfants enfants, Foret foret);

/**
 * \brief Permet de d�placer un Enfant dans la Foret. Si l'Enfant est � l'Etat MORT, il ne se d�placera pas.
 * \param enfant Pointeur vers un Enfant
 * \param foret pointeur vers la Foret.
 */void deplacerEnfant (Enfant* enfant, Foret foret);

#endif // ENFANT_H_INCLUDED
