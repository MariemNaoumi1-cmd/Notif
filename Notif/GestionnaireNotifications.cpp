#include "GestionnaireNotifications.h"
#include "GestionnaireNotifications.h"

GestionnaireNotifications::GestionnaireNotifications() {
    compteur = 0;
}
void GestionnaireNotifications::ajouter(Notification* n) {
    if (compteur < 100) {
        tab[compteur] = n;
        compteur++;
    }
}
void GestionnaireNotifications::envoyerToutes() {
    for (int i = 0; i < compteur; i++) {
        tab[i]->envoyer();
    }
}