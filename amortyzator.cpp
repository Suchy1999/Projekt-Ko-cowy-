#include <iostream>
using namespace std;
#include "amortyzator.h"


amortyzator::amortyzator(string _marka, string _model, string _producent, int _cena,string _rodzaj,string _typ) {
    setMarka(_marka);
    setModel(_model);
    setProducent (_producent);
    setCena (_cena);
    setRodzaj (_rodzaj);
    setTyp (_typ);
}

void amortyzator::setRodzaj(string _rodzaj) {

        rodzaj = _rodzaj;

}
void amortyzator::setTyp(string _typ) {

        typ = _typ;

}
