/*****************************************************************//**
 * \mainpage OgreBoulotteur.
 *  Ce programme sert à apprendre les bases du C, notamment :
 *  - les structures de données.
 *  - l'utilisation des bibliothèques.
 *  - les pointeurs.
 *  Le principe est simple, des enfants se promènent dans une forêt et sont chassés par un ogre.
 *  Quand ce dernier les trouve, il les dévore.
 *  C'est tout.
 *
 * \file   main.c
 * \brief  Le programme principal commence par créer les différentes structures de données nécessaires. Puis, il les initialise.
 * Il termine en lançant la fonction faireVivreForet(), qui elle va faire bouger tout ce petit monde.

 *
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   August 2020
 *********************************************************************/
#include "ogreboulotteur.h"

 /**
  * \fn int main (void)
  * \brief Entrée du programme.
  *
  * \return EXIT_SUCCESS - Arrêt normal du programme.
  */
int main (void) {

	Foret foret;
	Enfants enfants;
	Ogre ogre;

	initialiserForet (foret);
	initialiserOgre (&ogre, foret);
	initialiserEnfants (enfants, foret);

	faireVivreForet (foret, enfants, &ogre);

	return EXIT_SUCCESS;
}
