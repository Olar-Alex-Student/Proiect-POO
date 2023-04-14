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
        int* GetNumere();
        // Extragere Numere
        void ExtragereNumere();
        // Getter Numere Extrase
        int* GetNumereExtrase();

    protected:

    private:
        int castig;
        int numere[5];
        int extrase[40];
};

#endif // CINCIDINPATRUZECI_H
