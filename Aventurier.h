#pragma once
#include <string>
#include <vector>;
using std::vector;
#include "Quete.h";

class Aventurier
{
private:
    int niveau;
    vector <Quete*>tabQuete;

public:
    Aventurier(int niveau, vector<Quete*> tabQuete);

    ~Aventurier();

    void  AfficherQuete();

    void  AjouterQuete(Quete* quete);
    
    inline int  getNiveau() { return niveau; }

};


