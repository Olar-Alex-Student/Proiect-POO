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
        void SetSuma(float _suma);
        // Getter Suma
        float GetSuma();

    protected:

    private:
        float suma;
};

#endif // MAIN_H
