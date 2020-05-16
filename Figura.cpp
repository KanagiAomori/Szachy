#include "Figura.h"

Figura::Figura(std::string _nazwa, Kolor _kolor, int _wartosc, Partia* partiaReference)
: nazwa(_nazwa), kolor(_kolor), wartosc(_wartosc)
{
    std::cout << "stworzono figurę";
}

void Figura::pokaz_figure(){
    std::cout << nazwa << getKolor_string() << std::endl;
}

std::string Figura::getKolor_string() {
    if(kolor == 0)
        return "biały";
    if(kolor == 1)
        return "czarny";
}