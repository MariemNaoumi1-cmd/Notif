#include "N_email.h"
#pragma once 
#include"Notification.h"

N_email::N_email(string mess, string dist, string o) :Notification(mess,dist)
{
	this->objet = o;
}

void N_email::afficher() const
{
	cout << "A" << distinataire << "@gmail.com" << endl;
	cout << "objet: " << objet << endl;
	cout << "le message est :" << message << endl;
}

void N_email::envoyer() const
{
	cout << "Envoi d'un email" << endl;
}

N_email::~N_email()
{
	cout << "l destrecteru de la class N_email" << endl;
}
