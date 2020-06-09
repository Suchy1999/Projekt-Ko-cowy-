#include <iostream>
#include "Sklep-z-zawieszeniem.h"
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

Sklep::Sklep(){
    iloscCzesci= 0;
}
Sklep::Sklep(int ile)
{
    iloscCzesci=ile;
    zestawCzesci.resize(ile);
}
Sklep::~Sklep()
{
	zestawCzesci.clear();
}
void Sklep::dodaj_do_sklepu(czesc element)
{
    zestawCzesci.push_back(element);
}
void Sklep::dodaj_do_sklepuAM(amortyzator skladnik)
{
    zestawAmorkow.push_back(skladnik);
}

void Sklep::podglad()
{
    cout << "\nWyswietlam wszystkie elementy listy:"<<endl;
    for(auto& gaz : zestawCzesci)
	{
		gaz.wypisz();
	}

}
void Sklep::podgladAM()
{
    cout << "\nWyswietlam wszystkie elementy listy:"<<endl;
    for(auto& gaz : zestawAmorkow)
	{
		gaz.wypisz();
	}

}

void Sklep::wczytaj()
{

    fstream plik;
    plik.open("magazyn.txt", ios::in);
    if(plik.good()==false)
    {
        cout<<"Nie mozna otworzyc pliku!";
        exit(0);
    }
    int i;
    Sklep magazyn;
    string tekst;
    string ma,mo,pr;
    int ce;
    while(getline(plik,tekst)){
    stringstream tekstStream(tekst);
    tekstStream>>ma;
    tekstStream>>mo;
    tekstStream>>pr;
    tekstStream>>ce;
    czesc element(ma,mo,pr,ce);
    magazyn.dodaj_do_sklepu(element);
    }
    plik.close();
     magazyn.podglad();
}
void Sklep::dodaj_amorek()
{

    fstream plik;
    plik.open("amortyzatory.txt", ios::in);
    if(plik.good()==false)
    {
        cout<<"Nie mozna otworzyc pliku!";
        exit(0);
    }
    int i;
    Sklep amortyzatory;
    string tekst;
    string ma,mo,pr,ro,ty;
    int ce;
    while(getline(plik,tekst)){
    stringstream tekstStream(tekst);
    tekstStream>>ma;
    tekstStream>>mo;
    tekstStream>>pr;
    tekstStream>>ce;
    tekstStream>>ro;
    tekstStream>>ty;
    amortyzator skladnik(ma,mo,pr,ce,ro,ty);
    amortyzatory.dodaj_do_sklepuAM(skladnik);
    }
    plik.close();
     amortyzatory.podgladAM();
}
