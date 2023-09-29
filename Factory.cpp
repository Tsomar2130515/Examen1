#include "Factory.h"
#include <ctime>

static int genererNbre(int min, int max)
{

	return (rand() % (max - min + 1)) + min;

}




 Quete* Factory::getRandomQuete()
{
	srand(time(NULL));
	int nNiveauDifficulte = (rand() % (100-1)+1) + 1;
	Quete* maQuete = nullptr;
	int nivMin=0;
	int recompenseOr= 0;
	int exp = 0; 
	string nomQuete = "";
	niveau niveauDifficulteQuete = Facile;

	if (nNiveauDifficulte < 75)
	{
		niveauDifficulteQuete = Facile;
		nivMin = (rand() % (10 - 1) + 1) + 1;
		recompenseOr = (rand() % (1000 - 100) + 1) + 100;
		exp  = (rand() % (2000 - 100) + 1) + 100;
		nomQuete = "Easy";
		
	}
	else if (nNiveauDifficulte < 95)
	{
		niveauDifficulteQuete = Moyen;
		nivMin = (rand() % (25 - 10) + 1) + 10;
		recompenseOr = (rand() % (5000 - 1000) + 1) + 1000;
		exp = (rand() % (4000 - 2000) + 1) + 2000;
		nomQuete = "Medium";

	}
	else
	{
		niveauDifficulteQuete = Difficile;
		nivMin = (rand() % (99- 25) + 1) + 25;
		recompenseOr = (rand() % (35000 - 5000) + 1) + 5000;
		exp = (rand() % (14000 - 4000) + 1) + 4000;
		nomQuete = "Difficult";

	}

	maQuete = new Quete(nomQuete, niveauDifficulteQuete, nivMin , recompenseOr,  exp);


	return maQuete;
}

