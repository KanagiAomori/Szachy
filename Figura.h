#ifndef FIGURA
#define FIGURA

#include <iostream>
#include <string>
#include "Partia.h"

enum Kolor {bialy, czarny};

// sachownica
char numer_base[8] {'1','2','3','4','5','6','7','8'};
char character_base[8] {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

class Figura {  // polimorfic interface
    private:
        std::string nazwa;
        Kolor kolor;
        int wartosc;
        Partia* partiaReference; 

    public:
        Figura(std::string _nazwa, Kolor _kolor, int _wartosc, Partia* partiaReference);
        void ruch();    // pure virtual method
        virtual bool ruch_is_valid() = 0;
        void bicie();               
        void pokaz_figure();

        Kolor getKolor_enum();
        std::string getKolor_string();
};

#endif