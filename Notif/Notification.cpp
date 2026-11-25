#include "Notification.h"

Notification::Notification(string mess, string dist)
{
	this->message = mess;
	this->distinataire = dist;
}

void Notification::afficher() const
{
	cout << "A" << distinataire <<  endl;
	cout << "****** message  est :****" << message<< endl;

}

Notification::~Notification()
{
}
