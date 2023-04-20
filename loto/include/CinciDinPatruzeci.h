#ifndef CINCIDINPATRUZECI_H
#define CINCIDINPATRUZECI_H

class CinciDinPatruzeci
{
    public:
        // Consturcotr
        CinciDinPatruzeci();
        // Destructor
        virtual ~CinciDinPatruzeci();
        // Meniu 5/40
        void MainCinciDinPatruzeci();
        // Alegere Numere
        void AlegereNumere();
        // Getter Numere
        void GetNumere();
        // Extragere Numere
        void ExtragereNumere();
        // Getter Numere Extrase
        void GetNumereExtrase();
        // Verificare Castig
        void VerificareCastig();
        // Getter Castig
        float GetCastig();

    protected:

    private:
        float castig;
        int numere[5];
        int extrase[49];
};

#endif // CINCIDINPATRUZECI_H
