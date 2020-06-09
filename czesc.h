#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <fstream>

class czesc {
    protected:
        string marka;
        string model;
        string producent;
        int cena;
    public:
        czesc(string _marka = 0, string _model = 0, string _producent=0, int _cena=0);
        void setMarka(string _marka);
        void setModel(string _model);
        void setProducent(string _producent);
        void setCena(int _cena);
        string getMarka() const { return marka; }
        string getModel() const {return model; }
        string getProducent() const { return producent; }
        int getCena() const { return cena; }
        void wypisz() const { std::cout <<"Marka: "<< marka <<" Model: "<< model <<" Producent: "<<producent <<" Cena: "<< cena << "\n"; }
    };
