#ifndef SASEDINPATRUZECISINOUA_H
#define SASEDINPATRUZECISINOUA_H


class SaseDinPatruzeciSiNoua
{
    public:
        // Constructor
        SaseDinPatruzeciSiNoua();
        // Destructor
        virtual ~SaseDinPatruzeciSiNoua();
        // Meniu 5/40
        void MainSaseDinPatruzeciSiNoua();
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
        int numere[6];
        int extrase[49];
};

#endif // SASEDINPATRUZECISINOUA_H
