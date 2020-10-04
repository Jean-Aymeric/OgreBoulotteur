#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
extern "C" {
#include "../OgreBoulotteur/ogreboulotteur.h"
#include "../OgreBoulotteur/foret.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestOgreBoulotteur {
    TEST_CLASS (TestOgreBoulotteur) {
public:

    TEST_METHOD (f_initialiserForet) {
        Foret foret;
        int x, y;

        initialiserForet (foret);

        for (y = 0; y < FORET_HAUTEUR; y++) {
            for (x = 0; x < FORET_LONGUEUR; x++) {
                if ((y == 0) || (y == (FORET_HAUTEUR - 1)) || (x == 0) || (x == (FORET_LONGUEUR - 1))) {
                    Assert::AreEqual ((char)FORET_ARBRE, foret[y][x]);
                } else {
                    Assert::IsTrue (((char)FORET_SOL == foret[y][x]) || ((char)FORET_ARBRE == foret[y][x]));
                }
            }
        }
    }

    TEST_METHOD (f_initialiserOgre) {
        Foret foret;
        Ogre ogre;

        initialiserForet (foret);
        initialiserOgre (&ogre, foret);
        Assert::IsTrue (ogre.x > 0);
        Assert::IsTrue (ogre.y > 0);
        Assert::IsTrue (ogre.x < FORET_LONGUEUR);
        Assert::IsTrue (ogre.y < FORET_HAUTEUR);
        Assert::IsTrue ((char)FORET_SOL == foret[ogre.y][ogre.x]);
    }

    };
}
