#include<QString>
#include "acheivement.h"

QString Acheivement::get_Acheivement(int score)
{
    if (score >= 10 && score < 25) {
        return "Featherweight";
    } else if (score >= 25 && score < 50) {
        return "Wingspan";
    } else if (score >= 50 && score < 75) {
        return "Soaring Start";
    } else if (score >= 75 && score < 100) {
        return "High Flyer";
    } else if (score >= 100 && score < 150) {
        return "Skybound";
    } else if (score >= 150 && score < 200) {
        return "Bird of Prey";
    } else if (score >= 200 && score < 250) {
        return "Flap Master";
    } else if (score >= 250 && score < 300) {
        return "Avian Ace";
    } else if (score >= 300 && score < 400) {
        return "Feathered Phenom";
    } else if (score >= 400 && score < 500) {
        return "Winged Warrior";
    } else if (score >= 500 && score < 750) {
        return "Supreme Soarer";
    } else if (score >= 750 && score < 1000) {
        return "Legendary Flyer";
    } else if (score >= 1000 && score < 1500) {
        return "Flappy Conqueror";
    } else if (score >= 1500 && score < 2000) {
        return "Cloud Commander";
    } else if (score >= 2000) {
        return "Master of the Skies";
    } else {
        return "Invalid score";
    }

}

