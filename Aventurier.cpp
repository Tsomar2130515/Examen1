#include "Aventurier.h"
#include <string>
#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include "Quete.h" 
#include "Factory.h"
using namespace std;
Aventurier::Aventurier(int niveau, vector<Quete*> tabQuete)
{
	this->niveau = niveau;
	this->tabQuete = tabQuete;

}


Aventurier::~Aventurier() {}



void Aventurier:: AjouterQuete(Quete* quete )
{
	for (int i = 0; i < tabQuete.size(); i++)
	{
		tabQuete.push_back(quete);

	}

}




void  Aventurier::AfficherQuete() 
{
	for (auto quete : tabQuete) 
	{
       cout << quete->to_string();
	}

	/*Quete* queteDelete1 = *tabQuete.begin();
	Quete* queteDelete2 = *(tabQuete.end() - 1);
	delete queteDelete1;
	delete queteDelete2;
	queteDelete1 = nullptr;
	queteDelete2 = nullptr;
	tabQuete.erase(tabQuete.begin());
	tabQuete.erase((tabQuete.end() - 1));
	for (auto quete : tabQuete)
	{
		delete  quete;
	}*/

}




