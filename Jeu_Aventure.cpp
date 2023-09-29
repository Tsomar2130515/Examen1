#pragma once
#include <iostream>
#include <ctime>
#include <string>
#include "Quete.h" 
#include "Factory.h"
#include "Aventurier.h"
using namespace std;


int main()
{
    srand(time(NULL));
    Quete* QueteTest = Factory::getRandomQuete();
    cout << "Info Quete  : " << QueteTest->to_string()<< endl;

    delete QueteTest;

    vector<Quete*> tabQuete;

    Aventurier aventurierTest(10,tabQuete);


    int rounds = 12;
  
    Quete* queteAventurier = nullptr;
   

    for (int round = 1; round <= rounds; round++) 
    {
       
       
            queteAventurier = Factory::getRandomQuete();
            if(aventurierTest.getNiveau() >=queteAventurier->getNivMin())
            {
                aventurierTest.AjouterQuete(queteAventurier);
                //cout << "Info   : "  << endl;


            }
            else
            {
               delete queteAventurier;
              
            }
           
         
        
       

    }

    aventurierTest.AfficherQuete(); 
}

