#include "Quete.h"

Quete::Quete(string nom, niveau nivDifficulte, int nivMin, int recompenseOr, int expRecu)
{
	this->nom = nom;
	this->nivDifficulte = nivDifficulte;
	this->nivMin = nivMin;
	this->recompenseOr = recompenseOr; 
	this->expRecu = expRecu;

}


Quete::~Quete() {}
Quete::Quete() {}

std::string Quete::to_string()
{
	string messageNiveauDiff = "";

	if(getNivDifficulte() == Facile)
	{
		messageNiveauDiff = "  Facile";
	}
	else if(getNivDifficulte() == Moyen)
	{
		messageNiveauDiff = "   Moyen ";
	}
	else
	{
		messageNiveauDiff = "  Difficile ";
	}



	std::string info;
	info.append("Nom :" + nom + "\n");

	info.append("Niveau De Difficulte :" + messageNiveauDiff+ "\n");

	info.append("Niveau Min:" + std::to_string(nivMin) + "\n");

	info.append("Recompense En Or  :" + std::to_string(recompenseOr) + "\n");

	info.append("Experience Recu :" + std::to_string(expRecu ) + "\n");

	return info;


}



