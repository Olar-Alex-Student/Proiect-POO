#ifndef MAIN_H
#define MAIN_H

#include <Exceptie.h>
#include <CinciDinPatruzeci.h>
#include <SaseDinPatruzeciSiNoua.h>

class Main : public Exceptie
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
        // Setter Castig
        void SetCastig(float _castig);
        // Getter Castig
        float GetCastig();
        // Suma Dupa Joc
        void SetSumaDupaJoc(float _castig);
        // Exit Joc
        void Exit();
        // Alegeri Meniu
        void Alegeri();
        // Depozitare Suma
        void Depozit();
        // Vizualizare Suma
        void Vizualizare();
        // Joc Sase Din Patruzecisinoua
        void Sase(SaseDinPatruzeciSiNoua Joc6);
        // Joc Cinci Din Patruzeci
        void Cinci(CinciDinPatruzeci Joc5);

    protected:

    private:
        float suma;
        float castig;
};

#endif // MAIN_H
