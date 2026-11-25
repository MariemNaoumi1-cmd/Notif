#pragma once
#include<iostream>
using namespace std;
class Notification
{
protected:
	string message;
	string distinataire;
public:
	Notification(string, string);
	virtual void afficher()const;
	virtual void envoyer()const = 0;
	virtual ~Notification();
};

