#include <iostream>
#pragma once
#include <vector>
#include "czesc.h"
#include <fstream>
#include <string>
#include "amortyzator.h"
using namespace std;

class Sklep
{
private:
    vector <czesc> zestawCzesci;
    vector <amortyzator> zestawAmorkow;
    int iloscCzesci;

public:
    Sklep();
    Sklep(int ile);
    ~Sklep();

void dodaj_do_sklepu(czesc element);
void dodaj_do_sklepuAM(amortyzator skladnik);
void podglad();
void podgladAM();
void wczytaj();
void dodaj_amorek();
};
