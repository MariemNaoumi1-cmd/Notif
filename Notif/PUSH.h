#pragma once
#include "Notification.h"
#include<iostream>
using namespace std;
class PUSH : public Notification {
private:
	int user;
	string application;
public:
	PUSH(string mess, string dist, int user, string appl);
	void afficher() const override;
	void envoyer()const override;
	~PUSH();

};
