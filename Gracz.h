#ifndef GRACZ
#define GRACZ

#include <iostream>

class Gracz {
    private:
        std::string nazwa;
    public:
        bool wykonaj_ruch(); // zwraca false gdy ruch jest niedozwolony
};

#endif