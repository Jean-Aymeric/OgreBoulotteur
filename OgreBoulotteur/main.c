/*****************************************************************//**
 * \mainpage OgreBoulotteur.
 *  Ce programme sert � apprendre les bases du C, notamment :
 *  - les structures de donn�es.
 *  - l'utilisation des biblioth�ques.
 *  - les pointeurs.
 *  Le principe est simple, des enfants se prom�nent dans une for�t et sont chass�s par un ogre.
 *  Quand ce dernier les trouve, il les d�vore.
 *  C'est tout.
 *
 * \file   main.c
 * \brief  Le programme principal commence par cr�er les diff�rentes structures de donn�es n�cessaires. Puis, il les initialise.
 * Il termine en lan�ant la fonction faireVivreForet(), qui elle va faire bouger tout ce petit monde.

 *
 * \author Jean-Aymeric DIET jeanaymeric@gmail.com
 * \date   August 2020
 *********************************************************************/
#include "ogreboulotteur.h"

 /**
  * \fn int main (void)
  * \brief Entr�e du programme.
  *
  * \return EXIT_SUCCESS - Arr�t normal du programme.
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
