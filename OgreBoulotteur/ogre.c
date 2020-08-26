#include "ogre.h"

void initialiserOgre (Ogre* ogre, Foret foret) {
	int x, y;
	do {
		x = rand () % FORET_LONGUEUR;
		y = rand () % FORET_HAUTEUR;
	} while (foret[y][x] != FORET_SOL);
	(*ogre).x = x;
	(*ogre).y = y;
}

void deplacerOgre (Ogre* ogre, Foret foret, Enfants enfants) {
	int x, y;
	Direction direction;
	direction = rand () % 4;
	x = (*ogre).x;
	y = (*ogre).y;
	switch (direction) {
	case HAUT:
		y--;
		break;
	case DROITE:
		x++;
		break;
	case BAS:
		y++;
		break;
	case GAUCHE:
		x--;
		break;
	}
	if (foret[y][x] == FORET_SOL) {
		(*ogre).x = x;
		(*ogre).y = y;
		boulotterEnfants (ogre, enfants);
	}
}

void boulotterEnfants (Ogre* ogre, Enfants enfants) {
	int i = 0;
	for (i = 0; i < NOMBRE_ENFANTS; i++) {
		if (enfants[i].etat == VIVANT) {
			if ((enfants[i].x == (*ogre).x) && (enfants[i].y == (*ogre).y)) {
				enfants[i].etat = MORT;
			}
		}
	}
}

Ogre* ogrePresent (Ogre* ogre, int x, int y) {
	if (((*ogre).x != x) || ((*ogre).y != y)) {
		return NULL;
	} else {
		return ogre;
	}
}
