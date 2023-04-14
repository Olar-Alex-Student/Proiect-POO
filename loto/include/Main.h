#ifndef MAIN_H
#define MAIN_H

//Clase
#include "CinciDinPatruzeci.h"
#include "SaseDinPatruzeciSiNoua.h"

class Main : public CinciDinPatruzeci , SaseDinPatruzeciSiNoua
{
    public:
        // Constructor
        Main();
        // Destructor
        virtual ~Main();
        // Meniu Principal
        void main();
        // Citire Suma
        void CitireSumaTastatura();
        // Setter Suma
        void SetSuma(int _suma);
        // Getter Suma
        int GetSuma();

    protected:

    private:
        int suma;
};

#endif // MAIN_H
