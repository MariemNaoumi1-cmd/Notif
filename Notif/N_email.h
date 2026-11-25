#pragma once
#include "Notification.h"
#include <iostream>
using namespace std;
class N_email : public Notification
{
private:
	string objet;
public:
	N_email(string o, string mess, string dist);
	void afficher() const override;
	void envoyer() const override;
	~N_email();
};