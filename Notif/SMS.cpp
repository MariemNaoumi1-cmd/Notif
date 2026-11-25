#include "SMS.h"

SMS::SMS(string mess, string dist, int num, string oper):Notification(mess,dist)
{
	this->numeroTel = num;
	this->operateur = oper;
}

void SMS::afficher() const
{
	cout << "operateur :" << operateur << endl;
	cout << "A" << numeroTel <<"Monsier/Madame"<< distinataire<< endl;
	cout << "***...***" << message << endl;
}

void SMS::envoyer() const
{
	cout << "Envoi d'un SMS" << endl;
}

SMS::~SMS()
{
	cout << "le destrecteur de la class SMS" << endl, ;
}
