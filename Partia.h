#ifndef PARTIA
#define PARTIA

#include <vector>
#include "Gracz.h"
#include "Figura.h"

#define WIELKOSCSZACHOWNICY

class Gracz;
class Figura;

class Partia {
    private:
        Gracz gracze[2];
        Figura*** szachownica;  // tablica [8][8] wskaźników Figura*
        std::vector<Figura> figury;
    public:
        Partia();
        void inicjalizacja_szachownicy();
        void inicjalizacja_graczy();
        void oglos_zwyciestwo();
};

#endif