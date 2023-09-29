#pragma once
#include <string>
using namespace std;


enum niveau 
{
	Facile,
    Moyen,
	Difficile,

};

class Quete
{
    

private :

    string nom;

    niveau nivDifficulte;

    int nivMin ;

    int recompenseOr;
    

    int expRecu;

public:

    Quete(string nom,niveau nivDifficulte, int nivMin,int recompenseOr,int expRecu);
    Quete();

    ~Quete();

    inline niveau getNivDifficulte() { return nivDifficulte; }

    inline int  getNivMin() { return nivMin; }

    inline int  getRecompenseOr() { return recompenseOr; }
   
    virtual std::string to_string();

};

