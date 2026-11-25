#include "PUSH.h"

PUSH::PUSH(string mess, string dist, int user, string appl):Notification(mess,dist)
{
	this->user = user;
	this->application = appl;
}

void PUSH::afficher() const
{
	cout << "A" << distinataire << "le numero :" << user << endl;
	cout << "De" << application << endl;
	cout << "le contenu est :" << message << endl;

}

void PUSH::envoyer() const
{
	cout << "Envoi d'un SMS" << endl;
}

PUSH::~PUSH()
{
	cout << "le destrecteur de la clas SMS" << endl;
}
