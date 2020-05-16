#include "Figura.h"
#include "Partia.h"


Partia::Partia() {
    int i, j;
    szachownica = new Figura**[8];
    for(i = 0; i < 8; i++)
        *(szachownica + i) = new Figura*[8];

    for (i = 0; i < 8; i++){
        for (j= 0; j < 8;j++){
            *(*(szachownica + i) +j) = nullptr;
        }
    }
}

Partia::~Partia(){
    int i, j;
    for (i = 0; i < 8; i++){
        delete[] (*szachownica + i); // delete szachownica[i]
    }
    delete[] szachownica;   // delete szachownica
}