#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include "czesc.h"


class amortyzator: public czesc
{
    string rodzaj;
    string typ;
     public:
        amortyzator(string _marka = 0, string _model = 0, string _producent=0, int _cena=0,string _rodzaj=0,string _typ=0);
        void setRodzaj(string _rodzaj);
        void setTyp(string _typ);
        string getRodzaj() const { return rodzaj; }
        string getTyp() const {return typ; }
        void wypiszAM() const { czesc::wypisz(); cout << "Rodzaj: "<<rodzaj<<"Typ: "<<typ<< "\n"; }
};
