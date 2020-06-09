#pragma once
#include <iostream>
using namespace std;
#include "czesc.h"
#include <string>
#include <fstream>

czesc::czesc(string _marka, string _model, string _producent, int _cena) {
    setMarka(_marka);
    setModel(_model);
    setProducent (_producent);
    setCena (_cena);
}

void czesc::setMarka(string _marka) {

        marka = _marka;

}

void czesc::setModel(string _model) {

        model=_model;

}

void czesc::setProducent(string _producent) {

        producent=_producent;
}

void czesc::setCena(int _cena) {

        cena= _cena;

}
