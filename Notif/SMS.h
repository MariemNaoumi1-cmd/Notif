#pragma once
#include"Notification.h"
#include <iostream>
using namespace std;
class SMS : public Notification {
private:
	int numeroTel;
	string operateur;
public:
	SMS(string mess, string dist, int num, string oper);
	void afficher() const override;
	void envoyer() const override;
	~SMS();



};