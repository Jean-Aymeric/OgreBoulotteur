#include "foret.h"

void afficherForet (Foret foret, Enfants enfants, Ogre* ogre) {
	int x, y;

	system ("CLS");
	for (y = 0; y < FORET_HAUTEUR; y++) {
		for (x = 0; x < FORET_LONGUEUR; x++) {
			if (ogrePresent (ogre, x, y)) {
				printf ("%c", FORET_OGRE);
			} else {
				Enfant* enfant = enfantPresent (enfants, x, y);
				if (enfant == NULL) {
					printf ("%c", foret[y][x]);
				} else {
					if ((*enfant).etat == MORT) {
						printf ("%c", FORET_MORT);
					} else {
						printf ("%c", FORET_ENFANT);
					}

				}
			}
		}
		printf ("\n");
	}
}

void initialiserForet (Foret foret) {
	int x, y;

	srand (time (NULL));
	for (y = 0; y < FORET_HAUTEUR; y++) {
		for (x = 0; x < FORET_LONGUEUR; x++) {
			if ((y == 0) || (y == (FORET_HAUTEUR - 1)) || (x == 0) || (x == (FORET_LONGUEUR - 1))
				|| (rand () % FORET_DENSITE == 0)) {
				foret[y][x] = FORET_ARBRE;
			} else {
				foret[y][x] = FORET_SOL;
			}
		}
	}
}

void faireVivreForet (Foret foret, Enfants enfants, Ogre* ogre) {
	for (;;) {
		afficherForet (foret, enfants, ogre);
		deplacerEnfants (enfants, foret);
		int i;
		for (i = 0; i < 10; i++) {
			deplacerOgre (ogre, foret, enfants);
		}
	}
}
